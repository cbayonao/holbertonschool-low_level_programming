#include "holberton.h"
/**
 * _abs - Check the function
 * @n: The character to print
 * Return: 1 if n is greater than zero,
 * 0 if n is iqual than 0 and
 * -1 if n is less than 0
 */
int _abs(int n)

{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
