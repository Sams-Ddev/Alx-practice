#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFSIZE 1024

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
		{
			/* checks if the end of file (EOF) has been reached. */
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
			execve(cmd,(char *const []){cmd, NULL}, NULL);
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

