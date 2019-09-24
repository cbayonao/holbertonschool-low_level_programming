#include "holberton.h"
/**
 * jack_bauer - Checkea the function
 * Return: 0 always
 */
void jack_bauer(void)
{
	int horas, min;

	for (horas = 0; horas <= 23; horas++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((horas / 10) + '0');
			_putchar((horas % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
