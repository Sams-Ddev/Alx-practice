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

        // Handle the built-in setenv and unsetenv commands
        // ...

        // Handle the built-in cd command
        if (strcmp(args[0], "cd") == 0)
        {
            char *new_dir = args[1];
            if (new_dir == NULL || strcmp(new_dir, "~") == 0)
                new_dir = getenv("HOME");

            if (chdir(new_dir) != 0)
            {
                perror("cd");
            }
            else
            {
                char cwd[BUFFER_SIZE];
                if (getcwd(cwd, sizeof(cwd)) != NULL)
                    setenv("PWD", cwd, 1);
                else
                    perror("getcwd");
            }
            continue;
        }

        // Rest of your shell logic using args
        // ...
    }

    return 0;
}

