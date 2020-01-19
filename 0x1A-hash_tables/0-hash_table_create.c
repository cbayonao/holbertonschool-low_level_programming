#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size: sizeof
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

	if (ht->array == NULL)
		return (NULL);
	return (ht);

}
