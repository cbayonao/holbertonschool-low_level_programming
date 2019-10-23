#include "holberton.h"
/**
 * _islower - calls the function _islower.
 * @c:integer
 * Return: No return.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
