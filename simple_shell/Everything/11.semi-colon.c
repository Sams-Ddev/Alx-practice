#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define BUFFER_SIZE 1024

char *get_input(void)
{
    // ... (same get_input function implementation as before)
}

void execute_command(char *command)
{
    char **args = custom_tokenize(command);

    // Handle the built-in setenv, unsetenv, and cd commands
    // ...

    // Execute the command
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        perror("fork");
        return;
    }

    if (child_pid == 0) // Child process
    {
        execvp(args[0], args);
        perror("execvp");
        exit(EXIT_FAILURE);
    }
    else // Parent process
    {
        wait(NULL); // Wait for the child process to finish
    }
}

int main(void)
{
    char *input, *token;
    char *delimiter = ";";

    while (1)
    {
        printf("$ ");
        input = get_input();

        if (input == NULL)
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        }

        token = strtok(input, delimiter);

        while (token != NULL)
        {
            execute_command(token);
            token = strtok(NULL, delimiter);
        }

        free(input);
    }

    return 0;
}

