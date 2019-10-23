#include "holberton.h"
/**
* _strchr - The name of the function.
* @s:  the contain of the variable in reverse
* @c: character
* Return: s.
*/
char *_strchr(char *s, char c)
{
	for (; *s != c && *s != '\0'; s++)
		;
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
