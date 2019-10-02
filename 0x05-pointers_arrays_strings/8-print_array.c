#include <stdio.h>
#include "holberton.h"
/**
* print_array put the contain of the variable in reverse
* @s: character
* Return: No return.
*/
void print_array(int *a, int n)
{
	int x;
	
	for (x = 0; x <= n - 1; x++)
	{
		if (x == n - 1)
			printf("%d", a[x]);
		else
			printf("%d, ", a[x]);
	}
printf("\n");
}
