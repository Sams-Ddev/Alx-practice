#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
				count += _putchar(va_arg(args, int));
				break;

				case 's':
				count += _printstring(va_arg(args, char *))
			}
		}
	}
}
