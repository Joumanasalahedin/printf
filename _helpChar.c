#include "main.h"

/**
 * _strlen - count char in string
 * @s: string
 *
 * Return: strings
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * countOc - digits
 * @digit: number
 *
 * Return: count
 */

int countOc(unsigned int digit)
{
	int num = 0;

	while (digit > 0)
	{
		num++;
		digit /= 8;
	}

	return (num);
}

/**
 * countD - how many digits
 * @digit: number
 *
 * Return: count
 */

int countD(unsigned int digit)
{
	int num = 0;

	while (digit > 0)
	{
		num++;
		digit /= 10;
	}

	return (num);
}

/**
 * print_N - print numbers
 *@n: numbers
 *
 * Return: void
 */

int print_N(unsigned int n)
{
	int digits;
	unsigned int sum = n;

	if (sum / 10)
		print_N(sum / 10);
	digits = _putchar('0' + sum % 10);

	if (digits == -1)
	{
		return (digits);
	}
	return (digits);
}
