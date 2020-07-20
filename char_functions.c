#include "holberton.h"

/**
 * print_char - Function used to print characters
 * @c: va_list parameter
 * Return: Number of char printed
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * print_string - Function used to print characters
 * @s: va_list parameter
 * Return: Number of char printed
 */

int print_string(va_list s)
{
	int i;
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		string = "(null)";
	}

	for (i = 0; string[i] && string != NULL; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}

/**
 * print_porc - Function used to print %
 * Return: Number of char printed
 */

int print_porc(void)
{
	_putchar('%');
	return (1);
}
