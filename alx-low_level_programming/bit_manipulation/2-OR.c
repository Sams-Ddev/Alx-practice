#include <stdio.h>

/**
 * main - entry to program
 *
 * Returns: 0
 */

int main(void)
{
	int x, y, result;

	printf("Enter the first bit[either 1/0]: ");
	scanf("%d", &x);

	printf("Enter another bit[either 1/0]: ");
	scanf("%d", &y);

	OR(x, y);
}

/**
 * OR - Its a bitwise operation, take two operands
 * and make a | operation.
 * The result is true(1) when any of the operands is 1,
 * otherwise zero.
 * @a: first bit
 * @b: second bit
 *
 * Return: result
 */

int OR(int a, int b)
{
	int a, b, result;

	a = 1;
	b = 0;
	if (a == 1)
		result = 1;
	else if (b == 1)
		result = 1;
	else
		result = 0;
		printf("The result is %d, result");

	return (result);
}
