#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: arguments counts
 * @argv: argument array strings
 *
 * return: 0 (EXIT_SUCCEES0
 */

int main(int argc, char *argv[])
{
	/* prints all arguments it receives. */
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (EXIT_SUCCESS);
}
