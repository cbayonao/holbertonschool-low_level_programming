#include "stdio.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (numbers % 5 == 0 && numbers % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (numbers % 5 == 0)
		{
			if (numbers == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}

		}
		else if (numbers % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", numbers);
		}
	}
putchar ('\n');
return (0);
}
