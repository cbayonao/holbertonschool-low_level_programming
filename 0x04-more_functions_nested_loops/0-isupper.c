#include "holberton.h"

/**
 * _isupper - Entry point
 * @c: integer
 * Return: 1 if is uppercase
 * 0 if is otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
		{
		return (0);
		}
return (0);
}
