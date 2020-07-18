#include "holberton.h"

/**
 * _printf - List the characters or parameters given to be listed
 *           in va_list.
 * @format: All characters to be used acording to user.
 * Return: Characters
 */

int _printf(const char *format, ...)
{
        op_t p_list[] = {
                {"c", print_char},
                {"s", print_string},
                {"%", print_%},
                {NULL, NULL}
        };
        va_list list;

       if (!format) 
                return (-1) // Not sure if error or return

va_start(list, format)
//funcion
va_end(list);
return (0) //La funcion de print del character
}