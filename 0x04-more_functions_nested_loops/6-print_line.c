#include "holberton.h"
/**
 * print_line - Check the function
 * @n: integer.
 * Return: no return
 */
void print_line(int n)
{
	if (n > 0)
	{
		int x;

		for (x = 1; x <= n; x++)
		_putchar ('_');
	}
_putchar ('\n');
}
