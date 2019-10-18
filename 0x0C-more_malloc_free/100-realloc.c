#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
/**
* _memcpy - The name of the function.
* @dest:  the contain of the variable in reverse
* @src: character
* @n: integer unsigned
* Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *x = (char *)dest;
	char *y = (char *)src;

	for (i = 0; i < n; i++)
		x[i] = y[i];
return (x);
}
/**
 * _realloc  - check the code for Holberton School students.
 * @ptr: pointer to void
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pn;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		ptr = malloc(new_size);
			if (ptr == NULL)
				return(NULL);
			else
				return(ptr);
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		assert((ptr) && (new_size > old_size));
		pn = malloc(new_size);
		if (pn)
		{
			_memcpy(pn, ptr, old_size);
			free(ptr);
		}
	return (pn);
	}
}
