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
int print_hexup(va_list X);
int print_hexlo(va_list x);
int print_Oct(va_list o);
int print_u(va_list u);
int print_binary(va_list args);
void write_buffer(int *buffer, int len, va_list list);
int *create_buffer(void);
void hexadecimal(char c);
int print_non_printable(va_list args);
void print_Un(unsigned int num, unsigned int *size);
void print_Oc(unsigned int n, int *sz);
void print_hexlow(unsigned int n, int *sz);
void print_hexupp(unsigned int n, int *sz);
void hex_address(unsigned long int address, int *sz);
void print_Num(int un, int *sz);
int print_pointer(va_list args);
int _strlen(char *str);
int print_rev(va_list args);
int print_rot13(va_list args);

#endif
