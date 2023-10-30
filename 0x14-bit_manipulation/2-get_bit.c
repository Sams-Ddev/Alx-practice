#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 * @n: The number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*initializes mnumb to the value 0x01 (00000001)*/
	unsigned long int numb = 0x01;

	/* multiplies numb by 2 raised to the power of the index. */
	numb <<= index;
	if (numb == 0)
		return (-1);

	/*check if the bit at the specified index in the input value is set.*/
	if ((n & numb))
		return (1);
	else
		return (0);
}
