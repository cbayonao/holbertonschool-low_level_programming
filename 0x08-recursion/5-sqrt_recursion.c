#include "holberton.h"
/**
 * func - check the code for Holberton School students.
 *@n: integer.
 *@i: integer.
 * Return: Power between two numbers
 */
int func(int n, int i)
{

	if (i * i == n)
		return (i);
	if (i == n)
		return (-1);
	else if (n < 0)
		return (-1);
return (func(n, i + 1));
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 *@n: integer.
 * Return: Power between two numbers
 */
int _sqrt_recursion(int n)
{
	return (func(n, 1));
}
