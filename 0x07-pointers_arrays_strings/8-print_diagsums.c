#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - The name of the function.
* @a:  the contain of the variable in reverse
* @size: character
* Return: s.
*/
void print_diagsums(int *a, int size)
{
	int x, y;
	long int ab = 0, ac = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
				ab += *(a + x * size + y);
			if (x == (size - 1) - y)
				ac += *(a + x * size + y);
		}
	}
	printf("%li, %li\n", ab, ac);
}
