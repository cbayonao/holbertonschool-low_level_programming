#include "holberton.h"
#include <stdio.h>

/**
 * largo - Give me the length of my string.
 * @s: My string.
 * Return: Len Of my string.
 */
int largo(char *s)
{
	if (*s != '\0')
	{
		return (1 + largo(s + 1));
	}
	return (0);
}
/**
 * _compare - compare character by character.
 * @s: My string.
 * @l: Len for compares after.
 * Return: 0.
 */
int _compare(char *s, int l)
{
	if (*s != s[l])
	{
		return (0);
	}
	else if (*s == '\0')
		return (1);
	return (_compare(s + 1, l - 2));
}
/**
 * is_palindrome - verify if is palindrome.
 * @s: string.
 * Return: 0.
 */
int is_palindrome(char *s)
{
	int a, res;

	a = largo(s);
	res = _compare(s, a - 1);
	return (res);
}
