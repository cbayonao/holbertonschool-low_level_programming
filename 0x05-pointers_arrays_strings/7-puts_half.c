#include "holberton.h"
/**
* puts_half - put the contain of the variable in reverse
* @str: character.
* Return: No return.
*/
void puts_half(char *str)
{
	int x, mit, mod;

	for (x = 0; str[x] != '\0'; ++x)
		;
	mit = x / 2;
	mod = x % 2;
	if (mod == 0)
	{
		for (; mit < x; ++mit)
		{
			_putchar(str[mit]);
		}
	}
	else
	{
		mit = (x - 1) / 2;
		++mit;
		for (; mit < x; mit++)
		{
			_putchar(str[mit]);
		}
		
	}
_putchar('\n');
}
