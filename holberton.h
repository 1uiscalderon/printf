#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _putchar(char c);
/**
 * struct simbolo - structure.
 * @simb: pointer structure.
 * @f: function pointer.
 */
typedef struct simbolo
{
	char *simb;
	int (*f)();
} simb;
int _printf(const char *format, ...);
int (*take_form(char signo))(va_list);
int print_char(va_list c);
int print_string(va_list s);
int print_porc(void);
int print_int(va_list n);
void print_number(unsigned int n2);
int print_binary(va_list n);
void print_number_binary(int n2);
#endif
