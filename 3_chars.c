#include "main.h"

/**
 * print_un - print unsigned decimal
 * @list: arg
 *
 * Return: chars printed
 */
int print_un(va_list list)
{
	int digit;
	int sum = 0;
	unsigned int digits = sum;

	unsigned int num = va_arg(list, unsigned int);

	if (sum < 1)
	{
		_putchar('0');
		return (1);
	}

	digit = print_N(num);
	if (digit == 1)
	{
		sum += countD(digit);
	}
	else

		sum = -1;
	return (sum);
}
