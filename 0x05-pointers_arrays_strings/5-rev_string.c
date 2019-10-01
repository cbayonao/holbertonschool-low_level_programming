#include "holberton.h"
/**
* rev_string - put the contain of the variable in reverse
* @s: character
* Return: No return.
*/
void rev_string(char *s)
{
	int i;
	int n = 0;
	int swap = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		swap = s[i];
		s[i] = s[n - 1];
		s[n - 1] = swap;
		n--;
	}
}
