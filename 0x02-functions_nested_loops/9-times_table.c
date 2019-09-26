#include "holberton.h"
/**
 * times_table - Check the function
 * Return: 1 if n is greater than zero,
 * 0 if n is iqual than 0 and
 * -1 if n is less than 0
 */
void times_table(void)
{
	int column, rank, mult;

	for (column = 0; column < 10; column++)
	{
		_putchar('0');
		for (rank = 1; rank < 10; rank++)
		{
			mult = column * rank;
			if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mult) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
