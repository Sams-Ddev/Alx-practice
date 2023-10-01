#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to
 * an unsigned int.
 * @b:is pointing to a string of 0 and 1 chars
 *
 * Return: the conv_num.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;
	int strg_len;
	int i;
	char c;
	unsigned int bit_value;

	if (!b)
		return (0);/* returns 0 if b is NULL*/


	/* Lets calculate string_lenght(strg_len) in b*/
	strg_len = 0;
	while (b[strg_len] != '\0')
	{
		strg_len++;
	}

	/* Lets check for '0' and '1' in the string b */
	for (i = 0; i < strg_len; i++)
	{
		c = b[i];
		if (c == '0' || c == '1')
		{
			/* Calculate the decimal value of currunt binary */
			bit_value = c - '0';

			conv_num = (conv_num << 1) + bit_value;
		}
		else
		{
			return (0);
		}
	}

	return (conv_num);
}

