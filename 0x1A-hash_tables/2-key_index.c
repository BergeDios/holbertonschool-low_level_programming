#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: key for values
 * @size: size of the hash table
 * Return: index where it should be stored using hash uisng djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = 0;

	if (key != NULL && size > 0)
	{
		index = (hash_djb2(key) % size);
		return (index);
	}
	return (index);
}
