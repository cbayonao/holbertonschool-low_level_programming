#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - check the code for Holberton School students.
 * @b: int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
return (p);
}
