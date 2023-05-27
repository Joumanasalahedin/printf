#include "main.h"

/**
  * print_int - prints integers and decimals
  * @args: arguments
  * Return: number of characters printed
  */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int chars = 0, temp;
	int digits = 0;
	int index = 0, i;
	char *arr;

	if (num < 0)
	{
		_putchar(45); /* ASCII for - */
		num = -num;
		chars++;
	}
	temp = num;
	if (num == 0)
	{
		_putchar(48);
		return (chars);
	}
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	arr = (char *)malloc(digits * sizeof(char));
	if (arr == NULL)
		return (chars);
	while (num != 0)
	{
		arr[index++] = 48 + (num % 10);
		num /= 10;
	}

	for (i = digits - 1; i >= 0; i--)
	{
		_putchar(arr[i]);
		chars++;
	}
	free(arr);
	return (chars);
}
