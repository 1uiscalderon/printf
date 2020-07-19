#include "holberton.h"

int print_char(va_list c)
{
       _putchar(va_arg(c, int));
       return (1);
}

int print_string(va_list s)
{
       int i;
       char *string;

       string = va_arg(s, char *);
       for (i = 0; s != '\0'; i++)
       {
              _putchar(string[i]);
       }
       return (i) /* Check */
}

int print_%(void)
{
     _putchar('%');
     return (1);  
}