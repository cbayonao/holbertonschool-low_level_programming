#include "holberton.h"
/**
* _memset - The name of the function.
* @s:  the contain of the variable in reverse
* @b: character
* @n: integer unsigned
* Return: s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = (unsigned char)b;
return (s);
}
