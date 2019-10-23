#include "holberton.h"
/**
* _strcpy - The name of the function.
* @src:  the contain of the variable in reverse
* @dest: character
* Return: x.
*/
char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = '\0';
return (x);
}
