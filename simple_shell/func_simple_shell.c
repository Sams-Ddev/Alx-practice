#include "shell.h"

/**
 * opt_chars_read - runs set checks if end of file
 * is not reached.
 *
 * Return: 1 on success
 */

int opt_chars_read(void)
{
	char *cmd;

	/* checks if the end of file (EOF)*/
	if (feof(stdin))
	{
		printf("\n");
		free(cmd);
		exit(1);
	}
	else
	{
		perror("getline");
		exit(1);
	}
}
/**
 * handle - a function that handle NULL errors
 */
void handle_error(char *error_message)
{
	char cmd;

	perror(error_message);
	free(cmd);
	exit(EXIT_FAILURE);
}

/**
 * remove_newline - Remove the newline character
 * from the command
 * @cmd: user commands in terminal
 * @chars_read: reads charaters elements bu user.
 *
 * Return: 0
 */

void remove_newline(char *cmd, ssize_t chars_read)
{

	/* Remove the newline character from the command */
	if (cmd[chars_read - 1] == '\n')
		cmd[chars_read - 1] = '\0';
}

/**
 * main - start of simple shell program
 * a UNIX command line interpreter.
 *
 * Return: always 0 on success.
 */

int main(void)
{
	char *cmd;
	size_t buffsize = 0;
	ssize_t chars_read;
	pid_t child_pid;

	cmd = (char *)malloc(buffsize * sizeof(char));
	if (cmd == NULL)
	{
		perror("Unable to allocate command buffer");/* testing for NULL status*/
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		printf("#cisfun$ ");
		chars_read = getline(&cmd, &buffsize, stdin);
		if (chars_read == -1)
		{
			handle_error("getline");
		}
		remove_newline(cmd, chars_read);
		child_pid = fork();
		if (child_pid == -1)	 /* OpenAI's idealogy*/
		{
			handle_error("fork failed");
		}
		else if (child_pid == 0)	 /* On sucess child process runs */
		{
			execve(cmd, (char *const []){cmd, NULL}, NULL);
			handle_error("execve");
		}
		else
			wait(NULL);	/* Wait() waits till the process finish */
	}

	//free(cmd);
	return (0);
}


