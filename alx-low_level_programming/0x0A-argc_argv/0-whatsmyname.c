#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: The argument count
 * @argv: the char array stored
 *
 * Return: EXIT_SUCCESS
*/
int _putchar(char c);

int main(int argc __attribute__((unused)), const char *argv[])
{
	printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);
}
