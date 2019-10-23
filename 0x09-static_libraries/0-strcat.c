#include "holberton.h"
/**
* _strcat - The name of the function.
* @src:  the contain of the variable in reverse
* @dest: character
* Return: x.
*/
char *_strcat(char *dest, char *src)
{
	char *x = dest;

	for (; *dest != '\0'; dest++)
		;
	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = '\0';
return (x);
}
