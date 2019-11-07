#include "holberton.h"
/**
 * sum_listint - print singly linked list.
 * @head: pointer to list.
 *
 * Return: int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
