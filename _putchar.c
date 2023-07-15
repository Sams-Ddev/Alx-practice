#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printstring(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)"

	while (str[i] != '\0')
	{
		_putchar(str[i])
		i++;
	}
}
