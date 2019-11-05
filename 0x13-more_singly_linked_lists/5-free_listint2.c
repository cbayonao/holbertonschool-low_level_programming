#include "lists.h"
/**
 * free_listint2 - free all nodes of a list
 * @head: input list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
