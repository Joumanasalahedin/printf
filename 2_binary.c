#include "main.h"

/**
  * print_binary - prints binary numbers
  * @args: arguments
  * Return: 1 (Success)
  */

int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int chars = 0;
	int binary_digits[32];
	int index = 0;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary_digits[index++] = num % 2;
		num /= 2;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar('0' + binary_digits[i]);
		chars++;
	}

	return (chars);
}
