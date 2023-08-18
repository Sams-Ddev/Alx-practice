#include "shell.h"
/**
 * opt_char_read - runs set checks if end of file
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
 * elseif_op - calls on execve with cmd
 *
 * Return: 1 on success.
 */

int elseif_op(void)
{
	char *cmd;

	execve(cmd, (char *const []){cmd, NULL}, NULL);
	perror("execve");
	exit(1);
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
	size_t buffsize;
	ssize_t chars_read;

	cmd = (char *)malloc(buffsize * sizeof(char));
	if (cmd == NULL)
	{
		/* testing for NULL status*/
		perror("Unable to allocate command buffer");
		exit(1);
	}

	while (1)
	{
		printf("#cisfun$ ");
		chars_read = getline(&cmd, &buffsize, stdin);
		if (chars_read == -1)
			opt_chars_read();

		/* Remove the newline character from the command */
		if (cmd[chars_read - 1] == '\n')
			cmd[chars_read - 1] = '\0';
		pid_t child_pid = fork();

		/* If child process fails*/
		if (child_pid == -1)
		{
			perror("fork failed");
			exit(1);
		}
		/* On sucess child process runs */
		else if (child_pid == 0)
		{
			execve(cmd, (char *const []){cmd, NULL}, NULL);
			perror("execve");
			exit(1);
		}

		/* else switch to parent process */
		else
		{
			/* Wait() waits till the process finish */
			wait(NULL);
		}
	}

	free(cmd);
	return (EXIT_SUCCESS);
}
