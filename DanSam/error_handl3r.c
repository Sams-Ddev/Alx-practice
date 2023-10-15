#include "main.h"

/**
 *printStrg_input - prints the string thats  inputed
 * @strg: The string to be displayed or printed.
 *
 * Return: Nothing
 */
void printStrg_input(char *strg)
{
	int i = 0;

	if (!strg)
		return;
	while (strg[i] != '\0')
	{
		printChar_stderr(strg[i]);
		i++;
	}
}

/**
 * printChar_stderr - Writes the character 'c' to the standard error (stderr).
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1The function returns, and errno is set to the appropriate value.
 */
int printChar_stderr(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * printChar_fd - Writes the character 'c' to the specified file descriptor (fd).
 * @c: The character to be printed.
 * @fd: The filedescriptor to be written to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printChar_fd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 *printInp_strg - Prints a given input string.
 * @strg: string to be printed
 * @fd: the filedescriptor to write to
 *
 * Return: the number of chars put
 */
int printInp_strg(char *strg, int fd)
{
	int i = 0;

	if (!strg)
		return (0);
	while (*strg)
	{
		i += printChar_fd(*strg++, fd);
	}
	return (i);
}

