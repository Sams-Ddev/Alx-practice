#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

char *get_path(char *command)
{
    // ... (same get_path function implementation as before)
}

int main(void)
{
    char *command = NULL;
    size_t bufsize = 0;
    ssize_t characters_read;

    while (1)
    {
        printf(":) ");
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

        // Handle the built-in exit command
        if (strcmp(command, "exit") == 0)
        {
            free(command);
            exit(EXIT_SUCCESS);
        }

        char *full_path = get_path(command);

        if (full_path == NULL)
        {
            printf("Command not found: %s\n", command);
            continue;
        }

        pid_t child_pid = fork();

        if (child_pid == -1)
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (child_pid == 0) // Child process
        {
            execve(full_path, (char *const[]){command, NULL}, NULL);
            perror("execve");
            exit(EXIT_FAILURE);
        }
        else // Parent process
        {
            wait(NULL); // Wait for the child process to finish
        }

        free(full_path);
    }

    free(command);
    return 0;
}

/* gcc -Wall -Werror -Wextra -pedantic -std=gnu89 simple_shell.c -o simple_shell
./simple_shell
*/
