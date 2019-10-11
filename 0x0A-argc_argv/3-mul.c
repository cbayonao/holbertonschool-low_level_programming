#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function for mynameis.
 *@argc: integer.
 *@argv: character.
 * Return: 0 Always.
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return(1);
	}
	else
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%i\n", res);
		return(0);
}
