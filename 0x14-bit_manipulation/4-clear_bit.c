#include "main.h"

/**
 * clear_bit - This clear_bit() sets a bit to 0 at given index
 * @n: The number to set bit in
 * @index: The index to set bit
 *
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numb = 0x01;

	numb = ~(numb << index);
	if (numb == 0x00)
		return (-1);
	*n &= numb;
	return (1);
}
