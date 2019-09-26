#include "holberton.h"
/**
 * more_numbers - Check the function
 * Return: no return
 */
void more_numbers(void)
{
	int numbers;
	int repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (numbers = 0; numbers < 15; numbers++)
		{
			if (numbers >= 10)
			{
			_putchar ((numbers / 10) + '0');
			}
			_putchar ((numbers % 10) + '0');
		}
	_putchar ('\n');
	}
}
