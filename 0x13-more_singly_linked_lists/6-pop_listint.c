#include "lists.h"
/**
 * pop_listint - print singly linked list.
 * @head: pointer to list.
 *
 * Return: int.
 */
int pop_listint(listint_t **head)
{
	int new;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	new = (*head)->n;
	if (*head != NULL)
	{
		tmp = *head;
	}
	free(tmp);
	*head = (*head)->next;
	return (new);
}
