#include "main.h"
/**
 * while loop - uses _putchar to print single characters
 * to the statndard out
 *
 * Return: 0 for program success 
 */

int main(void)
{
	char *c = "Hello! World";
	char *str = "Hi Zerd";

	while (*c)
	{
		_putchar(*c);
		c++;
	}

	_printstring(str);

	return (0);
}