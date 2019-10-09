#include "holberton.h"
/**
 * factorial - check the code for Holberton School students.
 *@n: integer.
 * Return: .cccc
 */
int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
