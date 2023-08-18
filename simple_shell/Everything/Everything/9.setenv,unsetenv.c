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

int main(void)
{
    char *command;
    char **args;

    while (1)
    {
        printf("$ ");
        command = get_input();

        if (command == NULL)
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        }

        args = custom_tokenize(command);

        // Handle the built-in setenv command
        if (strcmp(args[0], "setenv") == 0)
        {
            if (args[1] != NULL && args[2] != NULL)
            {
                if (setenv(args[1], args[2], 1) != 0)
                {
                    perror("setenv");
                }
            }
            else
            {
                fprintf(stderr, "Usage: setenv VARIABLE VALUE\n");
            }
            continue;
        }

        // Handle the built-in unsetenv command
        if (strcmp(args[0], "unsetenv") == 0)
        {
            if (args[1] != NULL)
            {
                if (unsetenv(args[1]) != 0)
                {
                    perror("unsetenv");
                }
            }
            else
            {
                fprintf(stderr, "Usage: unsetenv VARIABLE\n");
            }
            continue;
        }

        // Rest of your shell logic using args
        // ...
    }

    return 0;
}

