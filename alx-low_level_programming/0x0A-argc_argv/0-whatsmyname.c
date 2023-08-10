#include <unistd.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: The argument count
 * @argv: the char array stored
 *
 * Return: EXIT_SUCCESS
*/

int main(int argc, char *argv[])
{
	_putchar('%d', argc);

	return (EXIT_SUCCESS);
}
