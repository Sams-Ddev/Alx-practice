#include <stdio.h>

/**
 * main - entry to program
 * @int: return data type
 *
 * Returns: 0
 */

int OR(int, int);

int main(void)
{
	int x, y;

	printf("Enter the first bit[either 1/0]: ");
	scanf("%d", &x);

	printf("Enter another bit[either 1/0]: ");
	scanf("%d", &y);

	int result = OR(x, y);

	/* Display result */
	printf("The result of bitwise OR: %d\n", result);

	return (0);
}

/**
 * OR - Its a bitwise operation, take two operands
 * and make a | operation.
 * The result is true(1) when any of the operands is 1, otherwise zero.
 * @a: first bit
 * @b: second bit
 *
 * Return: result
 */

int OR(int a, int b)
{
	int result = a | b;

	return (result);
}
