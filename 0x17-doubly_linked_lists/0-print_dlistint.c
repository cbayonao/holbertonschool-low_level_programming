#include "lists.h"
/**
 * print_dlistint - Check
 *@h: unsigned int
 *Return: x
 */
size_t print_dlistint(const dlistint_t *h)
{
	int current = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		current++;
	}
	return (current);
}
