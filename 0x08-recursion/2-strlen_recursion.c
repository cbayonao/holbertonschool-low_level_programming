#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s: character.
 * Return: .cccc
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
