#include "shell.h"

/**
 * main - Handle command lines with arguments
 */

 void prompt() {
    printf("#cisfun$ ");
    }
    void checks_chars_read()
    {
	    if (chars_read == -1)
        {
            if (feof(stdin))
            {
                printf("\n");
                free(cmd);
                exit(EXIT_SUCCESS);
            }
            perror("getline");
            exit(EXIT_FAILURE);
        }
    }

int main(void)
{
    char *cmd = NULL;
    size_t buffsize = 0;
    ssize_t chars_read;

    while (1)
    {
        prompt();
        chars_read = getline(&cmd, &buffsize, stdin);

	void checks_chars_read();

        // Remove the newline character from the command
        if (command[chars_read - 1] == '\n')
            command[chars_read - 1] = '\0';

        // Tokenize the command and arguments
        char *args[32]; // Assuming max 31 arguments
        char *token = strtok(command, " ");
        int i = 0;
        while (token != NULL)
        {
            args[i++] = token;
            token = strtok(NULL, " ");
        }
        args[i] = NULL; // Last element of the array must be NULL

        pid_t child_pid = fork();

        if (child_pid == -1)
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (child_pid == 0) // Child process
        {
            execve(args[0], args, NULL);
            perror("execve");
            exit(EXIT_FAILURE);
        }
        else // Parent process
        {
            wait(NULL); // Wait for the child process to finish
        }
    }

    free(cmd);
    return 0;
}

