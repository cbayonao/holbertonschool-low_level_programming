#include "holberton.h"
/**
 * print_most_numbers - Check the function
 * Return: no return
 */
void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		if (numbers != 2 && numbers != 4)
		{
			_putchar(numbers + '0');
		}
	}
_putchar('\n');
}
