#include "holberton.h"
/**
* string_toupper - put the contain of the variable in reverse
* @s: character
* Return: No return.
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
return (s);
}
