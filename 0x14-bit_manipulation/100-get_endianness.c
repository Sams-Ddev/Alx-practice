#include "main.h"

/**
 * get_endianness - get_endianness() func  checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/*initializes an unsigned integer i with the value 1. */
	unsigned int i = 1;

	/* pointer to char c is assigned the address of i */
	char *c = (char *)&i;

	/* checks the value of the 1st byte (char) pointed to by c. */
	if (*c)
		return (1);
	return (0);
}
