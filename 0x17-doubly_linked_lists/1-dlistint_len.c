#include "lists.h"
/**
 * dlistint_len - Check
 *@h: unsigned int
 *Return: x
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x;

	for (x = 0; h; x++)
	{
		h = h->next;
	}
	return (x);
}
