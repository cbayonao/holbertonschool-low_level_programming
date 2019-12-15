#include "lists.h"
/**
 * get_dnodeint_at_index - print doubly linked list.
 * @head: pointer to list.
 * @index: unsigned int.
 *
 * Return: int.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x != index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else
		{
			head = head->next;
			x++;
		}
	}
	return (head);
}
