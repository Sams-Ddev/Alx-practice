#include "main.h"

/**
 * set_bit - This function sets a bit at given index to 1
 * @n: The given number to set bit in
 * @index: The index of the n to set
 *
 * Return: 1 if it worked, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* initializes numb to the value 0x01(00000001) */
	unsigned long int numb = 0x01;

	/* shifts numb to the left by the number of index */
	numb <<= index;
	if (numb == 0)
		return (-1);
	*n |= numb;
	return (1);
}
