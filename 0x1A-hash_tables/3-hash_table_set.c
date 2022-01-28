#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_set - function to add element to hash table with key/value at idx
 * @ht: hash table
 * @key: key for node
 * @value: value for node
 * Return: 1 if success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_idx = 0;
	const unsigned char *keydup = (const unsigned char *)key;
	hash_node_t *target;

	if (!ht)
		return (0);
	if (!value)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	k_idx = key_index(keydup, ht->size);

	target = add_node_ht(&(ht->array[k_idx]), key, value);
	if (target == NULL)
		return (0);
	return (1);
}

/**
 * add_node_ht - adds a new node at the beginning of linked list
 * @ht: pointer to hash table
 * @key: key for placing
 * @value: value to be associated with key in node
 * Return: address of new node or NULL if it failed
 */
hash_node_t *add_node_ht(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node || key == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *ht;
	*ht = new_node;
	return (new_node);
}
