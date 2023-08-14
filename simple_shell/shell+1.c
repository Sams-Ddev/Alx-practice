#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    free(command);
    return 0;
}

