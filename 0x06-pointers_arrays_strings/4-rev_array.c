#include "holberton.h"
/**
* reverse_array - The name of the function.
* @a:  the contain of the variable in reverse
* @n: character
* Return: x.
*/
void reverse_array(int *a, int n)
{
	int i;
	int swap = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		swap = a[i];
		a[i] = a[n - 1];
		a[n - 1] = swap;
		n--;
	}
}
