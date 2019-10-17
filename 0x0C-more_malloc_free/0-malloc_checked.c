#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *H = malloc(b);

	if (H == NULL)
	{
		exit(98);
	}

	return (H);
}
