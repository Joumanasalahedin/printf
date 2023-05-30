#include "main.h"

/**
 * print_Un - print decimal integer
 * @num: number
 * @size: printf size
 * Return: decimal interger
 */

void print_Un(unsigned int num, unsigned int *size)
{
	if (num >= 10)
	{
		print_Un(num / 10, size);
	}

	*size += 1;
	_putchar('0' + (num % 10));
}

/**
 * print_Oc - Octal interger
 * @n: number
 * @sz: size of char
 */

void print_Oc(unsigned int n, int *sz)
{
	if (n >= 8)
	{
		print_Oc(n / 8, sz);
	}
	*sz += 1;
	_putchar('0' + (n % 8));
}

/**
 * print_hexlow - hexadecimal to lower case
 * @n:number
 * @sz: size
 */

void print_hexlow(unsigned int n, int *sz)
{
	if (n >= 16)
	{
		print_hexlow(n / 16, sz);
	}
	*sz += 1;
	if (n % 16 < 10)
	{
		_putchar('0' + (n % 16));
	}
	else
		_putchar('a' + ((n % 16) - 10));
}

/**
 * print_hexupp - hexadecimal to uppercase
 * @n:number
 * @sz: size
 *
 */

void print_hexupp(unsigned int n, int *sz)
{
	if (n >= 16)
	{
		print_hexupp(n / 16, sz);
	}
	*sz += 1;

	if (n % 16 < 10)
	{
		_putchar('0' + (n % 16));
	}
	else
		_putchar('A' + ((n % 16) - 10));
}
