#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, i = 0;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[x] != '\0'; x++)
		;
	array = malloc(sizeof(char) * x + n + 1);

	if (array == NULL)
		return (NULL);

	for (; i < (x + n); i++)
	{
		if (i < x)
			array[i] = s1[i];
		else
			array[i] = s2[y++];
	}
	array[i] = '\0';
	return (array);
}

