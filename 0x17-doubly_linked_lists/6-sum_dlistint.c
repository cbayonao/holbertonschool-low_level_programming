#include "lists.h"
/**
 * sum_dlistint - print singly linked list.
 * @head: pointer to list.
 *
 * Return: int.
 */
int sum_dlistint(dlistint_t *head)
{
	int num;
	dlistint_t *tmp;

	tmp = head;

	num = 0;
	while (tmp != NULL)
	{	
		num = num + tmp->n;
		tmp = tmp->next;
	}
	return (num);
}
