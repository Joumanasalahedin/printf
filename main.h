#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int (*get_function(char c))( va_list ap);

/**
  * struct format - matches specifiers to functions
  * @id: pointer to one of the specifiers
  * @func: pointer to conversion functions
  */
typedef struct format
{
	char *id;
	int (*func)();
} convert;

int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list args);

#endif
