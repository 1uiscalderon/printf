#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <unistd>
#include <stdarg.h>

int _putchar(char c);
typedef struct op
{
        char *char; // Character used to print acording to type
        int (*f)(va_list); // Function taken from the list
}op_t;


#endif