#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: pointer to new hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
		return (NULL);

	new->size = size;

	for (i = 0; i < size; i++)
		new->array[i] = NULL;

	return (new);
}
