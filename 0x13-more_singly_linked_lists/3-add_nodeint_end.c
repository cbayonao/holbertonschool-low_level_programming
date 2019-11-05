#include "lists.h"

/**
 * add_nodeint_end - add int at the end
 * @head: list
 * @n: int to insert
 * Return: int
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = malloc(sizeof(listint_t));
	listint_t *newnode;

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
