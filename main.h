#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

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
int printf_s(va_list list);
int printf_c(va_list list);
int printf_37(va_list list);
int print_int(va_list args);
int print_binary(va_list args);
void write_buffer(int *buffer, int len, va_list list);
int *create_buffer(void);
void hexadecimal(char c);
int print_non_printable(va_list args);
int print_N(unsigned int n);
int countD(unsigned int digits);
int _strlen(char *s);
int countOc(unsigned int digit);

int print_pointer(va_list args);
int _strlen(char *str);
int print_rev(va_list args);

#endif
