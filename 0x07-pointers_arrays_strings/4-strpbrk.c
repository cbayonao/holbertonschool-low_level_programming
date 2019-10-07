#include "holberton.h"
/**
* _strpbrk - The name of the function.
* @s:  the contain of the variable in reverse
* @b: character
* @n: integer unsigned
* Return: s.
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
		if(_strchr(accept, *s++))
			return ((char *)--s);
	return (0);
}
