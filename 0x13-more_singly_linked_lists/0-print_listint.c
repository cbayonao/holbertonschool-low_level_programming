#include "lists.h"
/**
 * print_list - Check
 *@h: unsigned int
 *Return: x
 */
size_t print_listint(const listint_t *h)
{
	int current = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		current++;
	}
	return(current);
}
