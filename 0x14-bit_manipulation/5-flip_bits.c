/**
 * flip_bits - The flip_bits() gets number of bits for a flip
 * @n: number of  bit flips needed to equal m for n
 * @m: The number to set other equals
 * Return: The n of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipps = 0;
	unsigned long int x_or = (n ^ m);
	unsigned long int numb = 0x01;

	while (numb <= x_or)
	{
		if (numb & x_or)
			flipps++;
		numb <<= 1;
	}
	return (flipps);
}
