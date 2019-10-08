#include "holberton.h"
/**
* print_chessboard - The name of the function.
* @a:  the contain of the variable in reverse
* Return: s.
*/
void print_chessboard(char (*a)[8])
{
	int x;
	int y;
	int tam = sizeof(*a) / sizeof(char);
	char b;

	for (x = 0; x < tam; x++)
	{
		for (y = 0; y < tam; y++)
		{
			b = (*(a + x))[y];
			_putchar(b);
		}
		_putchar('\n');
	}
}
