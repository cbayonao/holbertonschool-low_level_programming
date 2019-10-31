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
 * add_node - Check
 *@head: unsigned int
 *@str: const char.
 *Return: the address of the new element,
 *or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node)
	{
		if (str)
		{
			node->str = strdup(str);
		}
		node->len = _strlen(str);
		node->next = *head;
	}
	*head = node;
	return (node);
}
