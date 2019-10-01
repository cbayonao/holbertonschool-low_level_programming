#include "holberton.h"
/**
* swap_int - chage the values of the variables
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
