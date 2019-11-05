#include "lists.h"

/**
 * add_nodeint_end - add int at the end
 * @head: list
 * @n: int to insert
 * Return: int
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = *head;

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (NULL);
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
	}
	last->next = newnode;
	return (newnode);
}
