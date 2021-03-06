#include "lists.h"
/**
 * free_listint - Check
 *@head: unsigned int
 *Return: x
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
