#include "main.h"

/**
  * _strlen - length of a string
  *
  * @s: string
  *
  * Return: length of string s
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
