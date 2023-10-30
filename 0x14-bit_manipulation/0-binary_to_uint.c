#include "main.h"

/**
 * binary_to_uint - a function that converts a bits to
 * an unsigned int.
 * @b:is pointing to a string of 0 and 1 chars
 *
 * Return:(conv_numb).
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_numb = 0;
	int strg_length;
	int i;
	char c;
	unsigned int bit_value;

	if (!b)
		return (0);/* returns 0 if bi is NULL*/


	/* calculating the string_lenght(strg_length) in bi*/
	strg_length = 0;
	while (b[strg_length] != '\0')
		strg_length++;

	/* Checking for '0' and '1' in the string b */
	for (i = 0; i < strg_length; i++)
	{
		c = b[i];
		if (c == '0' || c == '1')
		{
			/* Calculating the decimal value of currunt bit */
			bit_value = c - '0';

			conv_numb = (conv_numb << 1) + bit_value;
		}
		else
			return (0);
	}

	return (conv_numb);
}
