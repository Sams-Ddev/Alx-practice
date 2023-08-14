#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

char **custom_tokenize(char *input)
{
    static char *tokens[32]; // Assuming max 31 tokens
    int token_count = 0;
    char *token = input;
    char *next_token = NULL;

    while ((next_token = strchr(token, ' ')) != NULL)
    {
        *next_token = '\0';
        tokens[token_count++] = token;
        token = next_token + 1;
    }

    if (token != input)
        tokens[token_count++] = token;

    tokens[token_count] = NULL; // Last element of the array must be NULL

    return tokens;
}

int main(void)
{
    char *command;
    char **args;

    while (1)
    {
        printf("#cisfun$ ");
        command = get_input();

        if (command == NULL)
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        }

        args = custom_tokenize(command);

        // Rest of your shell logic using args
        // ...
    }

    return 0;
}

