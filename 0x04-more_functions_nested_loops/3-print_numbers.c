#include "holberton.h"
/**
 * print_numbers - Check the function
 * Return: no return
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		_putchar (numbers + '0');
	}
_putchar ('\n');
}
