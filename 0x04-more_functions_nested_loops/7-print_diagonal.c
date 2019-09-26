#include "holberton.h"
/**
 * print_diagonal - Check the function
 * @n: integer.
 * Return: no return
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				if (y < x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(92);
				}
			}
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar ('\n');
	}
}
