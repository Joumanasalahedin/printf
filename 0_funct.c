#include "main.h"

/**
 * printf_c - print char
 * @list: arg
 *
 * Return: 0.
 */

int printf_c(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 * printf_s - print string
 * @list: arg
 *
 * Return: 0.
 */

int printf_s(va_list list)
{
	char *str;
	int i, len;

	str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}

	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}

/**
 * printf_37 - print %
 * @list: arg
 *
 * Return: 0.
 */

int printf_37(va_list list)
{
	(void)list;

	_putchar(37);

	return (1);
}
