#include "main.h"

/**
 * printf_c - print char
 * @list: arg
 *
 * Return: 0.
 */

int printf_c(va_list list)
{
	int c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 * printf_s - print string
 *@list: arg
 *
 * Return: 0.
 */

int printf_s(va_list list)
{
	int t;
	char *id = va_arg(list, char *);
	char *idNULL = "(null)";

	if (id == NULL)
	{
		for (t = 0; idNULL[t] != '\0'; t++)
		{
			_putchar(idNULL[t]);
		}
	}
	else
	{
		for (t = 0; id[t] != '\0'; t++)
		{
			_putchar(id[t]);
		}
	}

	return (t);

}
/**
 * printf_p - print %
 * @list: arg
 *
 * Return: 0.
 */

int printf_p(va_list list)
{
	(void)list;

	_putchar(37);

	return (1);
}
