#include "holberton.h"


int print_char(va_list c)
{
       _putchar(va_arg(c,int));
       return(1);
}