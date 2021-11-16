#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of list
 * @head: header of list
 * @index: num of node in index
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}
