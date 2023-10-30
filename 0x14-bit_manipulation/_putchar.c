#include <unistd.h>
/**
 * _putchar - prints a char to stdout
 * @c: char to be printed
 *
 * Return: a sys call that calls allocate 1 byte to stdio
 */

int _putchar(char c)
{
	/* Write the character to file descriptor 1 (stdout)*/
	return (write(1, &c, 1));
}
