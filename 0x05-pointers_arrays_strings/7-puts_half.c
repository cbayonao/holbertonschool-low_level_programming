#include "holberton.h"
/**
* puts_half - put the contain of the variable in reverse
* @str: character.
* Return: No return.
*/
void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		{
			_putchar (str[x]);
		}
	}
_putchar('\n');
}
