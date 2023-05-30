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
		{"%c", printf_c}, {"%s", printf_s},
		{"%%", printf_37},
		{"%d", print_int},
		{"%i", print_int},
		{"%b", print_binary},
		{"%u", print_un},
<<<<<<< HEAD
<<<<<<< HEAD
		{"%S", print_strs},
=======
		{"%S", print_non_printable},
>>>>>>> e5b50654a4f3e47f55051d8dbfae3cdfd43d56fd
=======
		{"%S", print_non_printable}, {"%p", print_pointer},
>>>>>>> 015b1ec1916f26360d15b965b7c10c3eba41892b
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
