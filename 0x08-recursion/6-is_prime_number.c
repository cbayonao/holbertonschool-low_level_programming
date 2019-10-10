#include "holberton.h"
/**
 * func - check the code for Holberton School students.
 *@n: integer.
 *@i: integer.
 * Return: Power between two numbers
 */
int func(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
return (func(n, i + 1));
}
/**
 * is_prime_number - check the code for Holberton School students.
 *@n: integer.
 * Return: Power between two numbers
 */
int is_prime_number(int n)
{
	return (func(n, 2));
}
