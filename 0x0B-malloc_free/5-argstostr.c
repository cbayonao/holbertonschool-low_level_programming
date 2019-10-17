#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that concatenates the arguments on your program
 * @str: pointer
 * Return: i
 */
int _strlen(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * argstostr - function that concatenates the arguments on your program
 * @ac: int
 * @av: char
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int len, i1, i2, sum;
	char *x;

	if (ac == 0 || av == '\0')
		return (NULL);
	for (len = 0; len < ac; len++)
	{
		sum = sum + _strlen(av[len]);
	}
	x = malloc((sum + ac + 1) * sizeof(char));
	if (x  == NULL)
	{
		free(x);
		return (NULL);
	}
	sum = 0;
	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2] !=  '\0'; i2++)
		{
			x[sum] = av[i1][i2];
			sum++;
		}
		x[sum] = '\n';
		sum++;
	}
	return (x);
}
