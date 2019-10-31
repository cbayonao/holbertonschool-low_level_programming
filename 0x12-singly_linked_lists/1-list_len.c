#include "lists.h"
/**
 * print_list - Check
 *@h: unsigned int
 *Return: x
 */
size_t list_len(const list_t *h)
{
	int x = 0;
	
	for (x = 0; h != NULL; x++)
	{
		printf("-> [%d] elements\n", h->len);
		h = h->next;
	}
	return (x);
}
