#include "holberton.h"
/**
* puts2 - put the contain of the variable in reverse
* @str: character
* Return: No return.
*/
void puts2(char *str)
{
	int x;
	int y = 0;
	int z;

	for (x = 0; str[x] != '\0'; x++)
	while (y != x)
	{
		if (z == 0)
		{
			_putchar (str[y]);
		}
		y = y + 1;
		z = y % 2;
	}
_putchar('\n');
}
