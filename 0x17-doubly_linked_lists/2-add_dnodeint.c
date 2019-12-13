#include "lists.h"
/**
 * add_nodeint - Check
 *@head: unsigned int
 *@n: int const
 *Return: x
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node)
	{
		if (n)
		{
			node->n = n;
		}
		node->next = *head;
	}
	*head = node;
	return (node);
}
