#include "lists.h"
/**
 * free_dlistint - Check
 *@head: unsigned int
 *Return: x
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_dlistint(head->next);
	free(head);
}
