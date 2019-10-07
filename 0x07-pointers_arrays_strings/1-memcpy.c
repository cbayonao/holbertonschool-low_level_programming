#include "holberton.h"
/**
* _memcpy - The name of the function.
* @dest:  the contain of the variable in reverse
* @src: character
* @n: integer unsigned
* Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *x = (char *)dest;
	char *y = (char *)src;

	for (i = 0; i < n; i++)
		x[i] = y[i];
return (dest);
}
