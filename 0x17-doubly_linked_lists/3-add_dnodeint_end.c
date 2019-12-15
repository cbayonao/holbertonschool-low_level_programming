#include "lists.h"

/**
 * add_dnodeint_end - add int at the end
 * @head: list
 * @n: int to insert
 * Return: int
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = malloc(sizeof(dlistint_t));
	dlistint_t *newnode;

	newnode = *head;

	if (last == NULL)
	{
		return (NULL);
	}
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
		*head = last;
	else
	{
		while (newnode->next != 0)
		{
			newnode = newnode->next;
		}
	newnode->next = last;
	}
	return (*head);
}
