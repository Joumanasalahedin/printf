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

	convert specs[] = {
		{"%c", printf_c}, {"%s", printf_s}, {"%%", printf_37},
		{"%d", print_int}, {"%i", print_int},
		{"%b", print_binary},
		{"%u", print_u}, {"%o", print_Oct},
		{"%x", print_hexlo}, {"%X", print_hexup},
		{"%S", print_non_printable}, {"%p", print_pointer},
<<<<<<< HEAD
		{"%d", print_int}, {"%r", print_rev},
		{"%i", print_int}, {"%b", print_binary},
		{"%S", print_non_printable}, {"%p", print_pointer}, {"%R", print_rot13},
=======
		{"%r", print_rev}, {"%R", print_rot13},
>>>>>>> de753931293f782f808eb42cf5501dc3746fcded
	};
	va_start(args, format);

	while (*format != '\0')
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
			_putchar(*format);
			chars++;
		}
		format++;
	}
	va_end(args);
	return (chars);
}
