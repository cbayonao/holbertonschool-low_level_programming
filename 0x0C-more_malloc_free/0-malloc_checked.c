#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - function that alocate memory using malloc.
 * @b: the size of the memory to print
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *p;
 
	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
