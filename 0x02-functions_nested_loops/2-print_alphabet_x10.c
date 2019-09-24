#include "holberton.h"
/**
 * print_alphabet_x10 - writes the alphabet x 10
 * Return: Without return
 */
void print_alphabet_x10(void)
{
	int con;
	char alp;

	for (con = 1; con <= 10; con++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
