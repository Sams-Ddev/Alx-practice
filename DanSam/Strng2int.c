#include "main.h"

/**
 * interative_chk -Returns true if the shell is in interactive mode.
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interative_chk(info_r *info)
{
	return (isatty(STDIN_FILENO) && info->readInput_fd <= 2);
}

/**
 * chk_Delim - checks if the character is a delimeter
 * @c: the char to check
 * @delim: The delimeter string
 * Return: 1 if true, 0 if false
 */
int chk_Delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *verify_alph - Verifies if a character is alphabetic.
 *@c: The character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

int verify_alph(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *strg_to_int - Converts a string into an integer.
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int strg_to_int(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

