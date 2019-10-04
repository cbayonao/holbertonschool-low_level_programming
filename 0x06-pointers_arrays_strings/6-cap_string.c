#include "holberton.h"
/**
* cap_string - put the contain of the variable in reverse
* @s: character
* Return: No return.
*/
char *cap_string(char *s)
{
	int a, b;
	int H[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', ' ', '\t'};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; H[b] != '\0'; b++)
		{
			if ((s[a] == H[b]) && (s[a + 1] >= 'a' && s[a + 1] <= 'z'))
			{
				s[a + 1] = s[a + 1] - 32;
			}
			else if (s[0] >= 'a' && s[0] <= 'z')
			{
				s[0] = s[0] - 32;
			}
		}
	}
return (s);
}
