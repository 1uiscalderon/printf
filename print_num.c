#include "holberton.h"

/**
 * print_int - Function used to print integers
 * @n: va_list parameter
 * Return: Number of integers printed
 */

int print_int(va_list n)
{
	unsigned int num = 0;
	int i = 0, count = 1;

	num = va_arg(n, int);

	i = num;

	if (i < 0)
	{
		_putchar('-');
		i = i * -1;
		num = i;
		count++;
	}
	for (; num >= 10; count++)
	{
		num = num / 10;
	}
	print_number(i);
	return (count);
}

/**
 * print_number - Function used to print integers using recursion
 * @n2: va_list parameter
 */

void print_number(int n2)
{
	int a = n2;

	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
