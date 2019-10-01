#include "holberton.h"
/**
* reset_to_98 - set the integer to 402
* @a: integer
* @b: integer
* Return: no return
*/
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
