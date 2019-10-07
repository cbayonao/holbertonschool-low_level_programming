#include "holberton.h"
/**
* _strstr - The name of the function.
* @haystack:  the contain of the variable in reverse
* @needle: character
* @n: integer unsigned
* Return: s.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *ini = haystack;
		char *patron = needle;

		while (*haystack && *patron && *haystack == *patron)
		{
			haystack++;
			patron++;
		}
		if (!*patron)
			return (ini);

		haystack = ini +1;
	}
	return ('\0');
}
