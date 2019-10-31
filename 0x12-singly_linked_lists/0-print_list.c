#include "lists.h"
/**
 * print_list - Check
 *@h: unsigned int
 *Return: x
 */
size_t print_list(const list_t *h)
{
	int x = 0;

	for (x = 0; h != NULL; x++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
