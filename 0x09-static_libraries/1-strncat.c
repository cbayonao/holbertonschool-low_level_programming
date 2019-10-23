#include "holberton.h"
/**
* _strncat - The name of the function.
* @src:  the contain of the variable in reverse
* @dest: character
* @n: integer.
* Return: x.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *x = dest;

	for (; *dest; dest++)
		;
	for (; n-- && *src; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = 0;
	return (x);
}
