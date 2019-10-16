#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - count the characters on a string
 * @width: char
 * @height: char
 * Return: char
 */
int **alloc_grid(int width, int height)
{
	int i = 0, n;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (; i < height; i++)
		*(p + i) = malloc(sizeof(int) * width);
		if (p == 0)
		for (n = i - 1; n > 0; n--)
			free(p + n);
return (p);
}
