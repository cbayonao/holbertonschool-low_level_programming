#include "lists.h"

/**
 * delete_dnodeint_at_index - Search and destroy
 * @head: Pointer
 * @index: Node to destroy
 * Return: int.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmpx, *tmpy;
	unsigned int i = 0;

	if (*head && head)
	{
		tmpx = *head;

		if (index == 0)
		{
			*head = tmpx->next;
			free(tmpx);
		}
		else
		{
			while (i != index - 1)
			{
				tmpx = tmpx->next;
				if (tmpx == NULL)
					return (-1);
				i++;
			}
			tmpy = tmpx->next;
			tmpx->next = tmpx->next->next;
			free(tmpy);
		}
		return (1);
	}
	return (-1);
}
