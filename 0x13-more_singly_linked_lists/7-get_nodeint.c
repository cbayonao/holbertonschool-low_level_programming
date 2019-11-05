#include "lists.h"
/**
 * get_nodeint_at_index - print singly linked list.
 * @head: pointer to list.
 * @index: unsigned int.
 *
 * Return: int.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
