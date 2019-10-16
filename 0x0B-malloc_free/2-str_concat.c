#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - count the characters on a string
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, i = 0, i2 = 0;
	char *array;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[x] != '\0'; x++)
		;
	for (; s2[y] != '\0'; y++)
		;
	array = malloc(sizeof(char) * x + y + 1);

	if (array == NULL)
		return (NULL);

	for (; i != x; i++)
		array[i] = s1[i];

	for (; i != x + y; i++)
	{
		array[i] = s2[i2];
		i2++;
	}

	return (array);
}
