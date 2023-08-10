#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument counts
 * @argv: char arrays
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	/* prints number of arguments */
	printf("%d\n", argc-1);

	return (0);
}
