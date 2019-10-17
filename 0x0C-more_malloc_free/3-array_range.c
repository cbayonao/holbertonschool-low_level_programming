#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - check the code for Holberton School students.
 * @min: char
 * @max: char
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array;
	int x = 0;
	int y = 0;

	if (min > max)
	{
		return (NULL);
	}
	y = max - min;
	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (; x <= y; x++, min++)
	{
		array[x] = min;
	}
return (array);
}
