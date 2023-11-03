#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

/**
 * strsplit - This func split strings into an array of strings
 * @str: strings to be worked on
 * @delimiter: specified character delimter
 *
 * Return: The tokens
 */

char **strsplit(char *str, char delimiter)
{
	char **tokens = malloc(sizeof(char *) * 100);
	int num_tokens = 0;
	char *token = strtok(str, &delimiter);

	while (token != NULL)
	{
		tokens[num_tokens++] = token;
		token = strtok(NULL, &delimiter);
	}
	tokens[num_tokens] = NULL;
	return (tokens);
}

/*-----------------------------------------------------*/
/**
 * strjoin - join an array of strings into a single string
 * @tokens: toklems to be taken
 * @delimiter: char delim
 *
 * Return: the concatenated strings
 */

char *strjoin(char **tokens, char delimiter)
{
	int total_length = 0;
	int i, current_index;
	char *joined_string;

	for (i = 0; tokens[i] != NULL; i++)
	{
		total_length += strlen(tokens[i]) + 1;
	}

	joined_string = malloc(sizeof(char) * total_length);
	current_index = 0;

	for (i = 0; tokens[i] != NULL; i++)
	{
		strcat(joined_string, tokens[i]);
		strcat(joined_string, &delimiter);
		current_index += strlen(tokens[i]) + 1;
	}

	joined_string[current_index - 1] = '\0';

	return (joined_string);
}

/**
 * my_free - the function free memory that was allocated
 * using `malloc() memory allocation function.
 * @ptr: this is a pointer to free memory
 */

void my_free(void *ptr)
{
	if (ptr != NULL)
	{
		free(ptr);
	}
}

/*-------main() entries to file------*/
/**
 * main - the entry to the main program
 *
 * Return: void
 */

int main(void)
{
	char prompt[] = "cisfun# ";
	char command_line[100];

	while (1)
	{
		int bytes_read;
		pid_t pid;
		char **tokens;

		write(STDOUT_FILENO, prompt, strlen(prompt));

		/* Read a line of input from the user.*/
		int bytes_read = getline(&command_line, sizeof(command_line), stdin);

		if (bytes_read == EOF)
		{
			/* End of file*/
			break;
		}
		/* Split the command line into tokens.*/
		tokens = strsplit(command_line, ' ');

		/* Execute the command.*/
		pid = fork();

		if (pid == 0)
		{
			/* Child process*/
			execve(tokens[0], tokens, NULL);
			_exit(1);
		}
		else
		{
			/* Parent process*/
			waitpid(pid, NULL, 0);
		}

		/* Free the memory allocated by `strsplit()`.*/
		my_free(tokens);
	}
	return (0);
}
