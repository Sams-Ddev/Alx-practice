#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFSIZE 1024
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
		{
			if (feof(stdin))
			{
				printf("\n");	/* checks if the end of file (EOF)*/
				free(cmd);
				exit(EXIT_FAILURE);
			}
			else
			{
				perror("getline");
				exit(1);
			}
		}

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
			exit(EXIT_FAILURE);
		}
		else
			wait(NULL);	/* Wait() waits till the process finish */
	}

	free(cmd);
	return (EXIT_SUCCESS);
}

