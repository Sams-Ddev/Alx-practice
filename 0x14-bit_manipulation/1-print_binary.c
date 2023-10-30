#include "main.h"

/**
 * print_binary -This func() prints the bits representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	/* checks if the input value is greater than 1 */
	if (n > 1)
	{
		/* function recursively calls itself with the input value divided by 2 */
		print_binary(n >> 1);
	}

	/*
	 * Once the input value is 1 or less, the function prints
	 * the least significant bit of the value to the console
	 */
	_putchar((n & 1) + '0');
}
