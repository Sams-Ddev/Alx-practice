#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry to program
 *
 * Return: 0 on  success
 */

int main()
{
	/* Declaring variables */
	char *line = NULL;	/*pointer to the wher buffer text is stored*/
	size_t len = 0;
	ssize_t read;

	FILE *file = fopen("example.txt", "r");
	if (file == NULL)
	{
		perror("Error opening file");
		return (1);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		printf("Line: %s", line);
	}

	free(line);
	fclose(file);

	return (0);
}

