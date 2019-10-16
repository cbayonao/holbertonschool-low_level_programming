#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - count the characters on a string
 * @grid: char
 * @height: char
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
