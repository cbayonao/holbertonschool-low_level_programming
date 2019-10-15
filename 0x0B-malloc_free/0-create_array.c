#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - function that gets two variables
 * @size: int that indicate the size of the string
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

		array = malloc(sizeof(char) * size);

		if ((array != '\0') && (size != 0))
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
			return (array);
		}
		else
		{
			return ('\0');
		}
}
