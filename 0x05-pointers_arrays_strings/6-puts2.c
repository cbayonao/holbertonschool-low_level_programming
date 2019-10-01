#include "holberton.h"
/**
* puts2 - put the contain of the variable in reverse
* @str: character.
* Return: No return.
*/
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar (str[x]);
		}
	}
_putchar('\n');
}
