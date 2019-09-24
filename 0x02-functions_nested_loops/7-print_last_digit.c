#include "holberton.h"
/**
 * print_last_digit - Check the function
 * @n: The character to print
 * Return: 1 if n is greater than zero,
 * 0 if n is iqual than 0 and
 * -1 if n is less than 0
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = l * -1;
		_putchar(l + '0');
	}
	else
	{
		_putchar(l + '0');
	}
	return (l);
}
