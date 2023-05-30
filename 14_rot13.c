#include "main.h"

/**
  * print_rot13 - prints strings in ROT13
  * @args: arguments
  * Return: characters printed
  */

int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int a, n, chars = 0, found;

	for (a = 0; str[a] != '\0'; a++)
	{
		found = 0;
		for (n = 0; n < 52; n++)
		{
			if (str[a] == rot13[n])
			{
				_putchar(rot13[n]);
				chars += 1;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			_putchar(str[a]);
			chars += 1;
		}
	}
	return (chars);
}
