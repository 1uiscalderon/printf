#include "holberton.h"

/**
 * _printf - List the characters or parameters given to be listed
 *           in va_list.
 * @format: All characters to be used acording to user.
 * Return: Characters
 */
int(*take_form(char signo))(va_list))
{
        simb op_list[] = {
            {"c", print_char},
            /*   {"s", print_string},
                {"%", print_%},
                {"d", print_int},
                {"i", print_int},
               */
            {NULL, NULL}};
        int i;

        for (i = 0; op_list[i].simb != NULL; i++)
        {
                if (signo == op_list[i].simb[0])
                {
                        return (op_list[i].f);
                }
        }
        return (0);
                    
}

int _printf(const char *format, ...)
{
        int i = 0;
        int (*simb)(va_list);
        va_list argumentos;
        
        va_start(argumentos,format); 
        while (format[i] != '\0')
        {
                
                
           i++;
        }
        va_end(argumentos);

   /*             return (-1) // Not sure if error or return

                    va_start(list, format)
                    //funcion
                    va_end(list);
        return (0) //La funcion de print del character */
}