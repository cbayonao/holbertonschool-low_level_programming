#include "holberton.h"
/**
* print_rev - put the contain of the variable in reverse
* @s: character
* Return: return the length of the string.
*/
void print_rev(char *s)
{
	int i;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}
