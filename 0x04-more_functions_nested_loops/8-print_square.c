#include "holberton.h"
/**
 * print_square - Check the function
 * @size: integer.
 * Return: no return
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (x = 1; x <= size; x++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar ('\n');
	}
}
