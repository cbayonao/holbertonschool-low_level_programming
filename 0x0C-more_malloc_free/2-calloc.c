#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - function that gets two variables
 * @nmemb: int that indicate the size of the string
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

		array = malloc(nmemb * size);

		if ((nmemb == 0) || (size == 0))
			return (NULL);
		if ((array != '\0') && (size != 0))
		{
			for (i = 0; i < nmemb * size; i++)
			{
				array[i] = 0;
			}
			return (array);
		}
		else
		{
			return ('\0');
		}
}
