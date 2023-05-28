#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int (*get_function(char c))( va_list ap);
int printf_s(va_list list);
int printf_c(va_list list);
int printf_p(va_list list);

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
