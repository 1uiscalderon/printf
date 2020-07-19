#include "holberton.h"
int func_count(va_list)
{
}
int print_int(va_list n)
{
        unsigned int i = n;
        static int count = 0;
        num = va_arg(n, int);
        if (num < 0)
        {
                i = -num;
                _putchar('-');
                count ++;
        }
        if (i >= 10)
        {
                count++;
                print_int(i / 10);
        }
        if ( i < 10)
        {
                count++;
        }
        _putchar((i % 10) + '0');
       return(count);
        
}