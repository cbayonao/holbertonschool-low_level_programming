#include "holberton.h"
/**
* _strlen - count the long of the variable
* @s: character
* Return: return the length of the string.
*/
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
