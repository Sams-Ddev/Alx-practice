#include "shell.h"

/**
 * get_path -  A function that computes for
 * the path of file.
 *
 * Return: 0.
 */

char *get_path(char *cmd)
{
	/* ... (same get_path function implementation as before) */
}

/**
 * checks_chars_read - checks if EOF isnt reached
 * else return success.
 *
 * Return: 1 on completion
 */
int checks_chars_read(void)
{
	ssize_t chars_read;
	char *cmd;

	if (chars_read == -1)
	{
		if (feof(stdin))
		{
			printf("\n");
			free(cmd);
			exit(0);
		}
		else
		{
			perror("getline");
			exit(1);
		}
	}
}


/**
 * main - entru point to function
 *
 * returns: 0.
 */
int main(void)
{
	char *cmd = NULL;
	size_t buffsize = 0;
	ssize_t chars_read;

	while (1)
	{
		printf(":) ");
		chars_read = getline(&cmd, &buffsize, stdin);
		checks_chars_read();

		/* Remove the newline character from the command */
		if (cmd[chars_read - 1] == '\n')
			cmd[chars_read - 1] = '\0';
		if (strcmp(cmd, "exit") == 0)	/* Handle the built-in exit command */
		{
			free(cmd);
			exit(EXIT_SUCCESS);
		}
		char *full_path = get_path(cmd);
		if (full_path == NULL)
		{
			printf("Command not found: %s\n", cmd);
			continue;
		}
		pid_t child_pid = fork();
		if (child_pid == -1)
		{
			perror("fork error");
			exit(1);
		}
		if (child_pid == 0) /* Child process*/
		{
			execve(full_path, (char *const[]){cmd, NULL}, NULL);
			perror("execve");
			exit(EXIT_FAILURE);
		}
		else /* Parent process */
			wait(NULL); /* Wait for the child process to finish */
		free(full_path);
	}

	free(cmd);
	return (0);
}

