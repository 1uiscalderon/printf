#include "holberton.h"
#include <limits.h>

/**
 * print_int - Function used to print integers
 * @n: va_list parameter
 * Return: Number of integers printed
 */

int print_int(va_list n)
{

	unsigned int num = 0;
	int i = 0;
	int count = 1;

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

void print_number(unsigned int n2)
{
	unsigned int a = n2;

	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
/**
 * print_binary - Function used to print integers
 * @n: va_list parameter
 * Return: Number of integers printed
 */

int print_binary(va_list n)
{

	int num = 0;
	unsigned int i = 0;
	int count = 0;

	num = va_arg(n, int);
	i = num;
	if (num <= 0)
	{
		_putchar('0');
	}
	if (num <= 0)
		return (1);
	for (; i > 0; count++)
	{
		i = i / 2;
	}
	print_number_binary(num);
	return (count);
}
/**
 * print_number_binary - Function used to print integers using recursion
 * @n2: va_list parameter
 */

void print_number_binary(int n2)
{
	unsigned int a = n2;

	if (a / 2)
	{
		print_number_binary(a / 2);
	}
	_putchar(a % 2 + '0');
}
