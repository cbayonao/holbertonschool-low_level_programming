#include "holberton.h"
/**
 * _islower - writes the character c to stdout
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
