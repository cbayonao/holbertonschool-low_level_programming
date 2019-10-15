#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - function that gets two variables
 * @str: int that indicate the size of the string
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *src;
	char *p;
	int len;

	for (len = 0; str[len]; len++)
	{
		src = malloc(len + 1);
		p = src;
	}
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (src);
}
