#include "lists.h"
/**
 * add_dnodeint - Check
 *@head: unsigned int
 *@n: int const
 *Return: x
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

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
