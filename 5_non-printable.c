#include "main.h"

/**
  * hexadecimal - converts ASCII to hexadecimal
  * @c: ASCII code value
  * Return: void
  */

void hexadecimal(char c)
{
	char hex_digits[2];
	int quotient = c;
	int i, remainder;

	for (i = 1; i >= 0; i--)
	{
		remainder = quotient % 16;
		if (remainder < 10)
		{
			hex_digits[i] = 48 + remainder; /* '0' */
		}
		else
		{
			hex_digits[i] = 65 + (remainder - 10); /* 'A' */
		}
		quotient /= 16;
	}

	_putchar(hex_digits[0]);
	_putchar(hex_digits[1]);
}

/**
  * print_non_printable - prints non printable characters
  * @args: arguments
  * Return: printed characters
  */

int print_non_printable(va_list args)
{
	char *str;
	int chars = 0;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str != '\0')
	{
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
			chars++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			hexadecimal(*str);
			chars += 4;
		}
		str++;
	}
	return (chars);
}
