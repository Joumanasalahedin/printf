#include "main.h"
#include <stdarg.h>
/**
  * _printf - produces output according to a format
  * @format: identifiers
  * Return: number of printed characters
  */

int _printf(const char *format, ...)
{
	va_list args;
	int chars = 0;
	unsigned long int i;


	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			for (i = 0; i < sizeof(specs) / sizeof(specs[0]); i++)
			{
				if (specs[i].id[1] == *format)
				{
					chars += specs[i].func(args);
					break;
				}
			}
		}
		else
		{
			chars += _putchar(*format);
			chars++;
		}

		format++;
	}

	va_end(args);

	return (chars);
}
