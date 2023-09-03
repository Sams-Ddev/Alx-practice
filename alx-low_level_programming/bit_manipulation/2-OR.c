#include <stdio.h>

/**
 * main - entry to program
 *
 * Returns: 0
 */

int OR(int, int);

int main(void)
{
	int x, y, result;

	printf("Enter the first bit[either 1/0]: ");
	scanf("%d", &x);

	printf("Enter another bit[either 1/0]: ");
	scanf("%d", &y);

	OR(x, y);
	return (result);
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

int OR(int, int)
{
	int a, b, result;

	if (a == b == 1)
	{
		result = 1;
		printf("The OR(|) result is: %d\n", result);
	}
	else
		printf("The OR(|) result is: 0");
}
