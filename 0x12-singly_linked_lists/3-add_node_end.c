#include "lists.h"
/**
* _strlen - count the long of the variable
* @str: character
* Return: return the length of the string.
*/
unsigned int _strlen(const char *str)
{
	int n;

	for (n = 0; *str != '\0'; str++)
		n++;
	return (n);
}
/**
 * add_node_end - Check
 *@head: unsigned int
 *@str: const char.
 *Return: the address of the new element,
 *or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	list_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	if (str == NULL)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		if (new_node->str == 0)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(str);
	}
	new_node->next = NULL;
	return (new_node);
}
