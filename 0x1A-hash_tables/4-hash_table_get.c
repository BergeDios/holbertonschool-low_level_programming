#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key you are looking for
 * Return: value associated or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *keydup = (const unsigned char *)key;
	unsigned long int k_idx = 0;
	hash_node_t *head;

	if (!key || !ht)
		return (NULL);
	k_idx = key_index(keydup, ht->size);
	head = ht->array[k_idx];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
