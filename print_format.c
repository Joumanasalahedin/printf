#include "main.h"

/**
 * print_Num - output number
 * @un: interger
 * @sz: size
 *
 * Return: void
 */

void print_Num(int un, int *sz)
{
	unsigned int n;

	if (un < 0)
	{
		un *= -1;
		*sz += 1;
		_putchar('-');
	}

	n = un;
	if (n / 10)
	{
		print_Num(n / 10, sz);
	}

	*sz += 1;
	_putchar((n % 10) + '0');
}

/**
 * hex_address - lowercase hexa address
 * @address: address of deci
 * @sz: size
 *
 * Return: void
 */

void hex_address(unsigned long int address, int *sz)
{
	if (address / 16)
	{
		print_hexlow(address / 16, sz);
	}
	*sz += 1;
	if (address % 16 < 10)
	{
		_putchar('0' + (address) % 16);
	}
	else
		_putchar('a' + (((address) % 16) - 10));
}
