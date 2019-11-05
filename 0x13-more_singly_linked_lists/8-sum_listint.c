#include "lists.h"
/**
 * sum_listint - print singly linked list.
 * @head: pointer to list.
 *
 * Return: int.
 */
int sum_listint(listint_t *head)
{
	int num;
	listint_t *tmp;

	tmp = head;

	num = 0;
	while (tmp != NULL)
	{
		num = num + tmp->n;
		tmp = tmp->next;
	}
	return (num);
}
