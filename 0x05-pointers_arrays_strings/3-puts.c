#include "holberton.h"
/**
* _puts - put the contain of the variable
* @str: character
* Return: return the length of the string.
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
_putchar('\n');
}
