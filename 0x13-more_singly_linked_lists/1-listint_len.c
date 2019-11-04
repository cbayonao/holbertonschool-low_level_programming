#include "lists.h"
/**
 * listint_len - Check
 *@h: unsigned int
 *Return: x
 */
size_t listint_len(const listint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
