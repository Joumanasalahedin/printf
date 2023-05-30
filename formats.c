#include "main.h"
#include <stdarg.h>

/**
 * print_u - unsigned int
 * @u: list
 * Return: number
 */

int print_u(va_list u)
{
	unsigned int un = 0;

	print_Un(va_arg(u, unsigned int), &un);
	return (un);
}

/**
 * print_Oct - number in octal
 * @o: list
 * Return: number
 */

int print_Oct(va_list o)
{
	int un;

	print_Oc(va_arg(o, unsigned int), &un);
	return (un);
}

/**
 * print_hexlo - lowercase hexa
 * @x: list
 * Return: number
 */

int print_hexlo(va_list x)
{
	int un = 0;

	print_hexlow(va_arg(x, unsigned int), &un);
	return (un);
}

/**
 * print_hexup - uppercase hexa
 * @X: list
 * Return:number
 */

int print_hexup(va_list X)
{
	int un = 0;

	print_hexupp(va_arg(X, unsigned int), &un);
	return (un);
}
