#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

int main(void)
{
    char *command = NULL;
    size_t bufsize = 0;
    ssize_t characters_read;

    while (1)
    {
        printf("#cisfun$ ");
        characters_read = getline(&command, &bufsize, stdin);

        if (characters_read == -1)
        {
            if (feof(stdin))
            {
                printf("\n");
                free(command);
                exit(EXIT_SUCCESS);
            }
            perror("getline");
            exit(EXIT_FAILURE);
        }

        // Remove the newline character from the command
        if (command[characters_read - 1] == '\n')
            command[characters_read - 1] = '\0';

        pid_t child_pid = fork();

        if (child_pid == -1)
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (child_pid == 0) // Child process
        {
            execve(command,(char *const []){command, NULL}, NULL);
            perror("execve");
            exit(EXIT_FAILURE);
        }
        else // Parent process
        {
            wait(NULL); // Wait for the child process to finish
        }
    }

    free(command);
    return 0;
}

