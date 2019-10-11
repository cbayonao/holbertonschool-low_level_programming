#include <stdio.h>
/**
 * main - Function for mynameis.
 *@argc: integer.
 *@argv: character.
 * Return: 0 Always.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
