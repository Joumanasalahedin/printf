#include "main.h"

/**
  * print_pointer - prints pointer address
  * @args: arguments
  * Return: printed characters
  */

int print_pointer(va_list args)
{
	void *ptr;
	unsigned long int address, quotient, remainder;
	int chars = 0, count = 0, i;
	char hex_digits[20], *str = "(nil)";

	ptr = va_arg(args, void *);
	address = (unsigned long int)ptr;
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			chars++;
		} return (chars);
	}
	else
	{
		_putchar(48); /* 0 */
		_putchar(120); /* x */
		chars += 2;
		if (address == 0)
		{
			_putchar(48);
			return (chars + 1);
		} quotient = address;
		while (quotient != 0)
		{
			remainder = quotient % 16;
			if (remainder < 10)
				hex_digits[count++] = 48 + remainder;
			else
				hex_digits[count++] = 97 + (remainder - 10);
			quotient /= 16;
		}
		for (i = count - 1; i >= 0; i--)
		{
			_putchar(hex_digits[i]);
			chars++;
		} return (chars);
	}
}
