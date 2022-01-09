#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dll
 * @head: pointer to head pof dll
 * @index: index of node wanted
 * Return: address of node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (!head)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (counter == index)
			break;
		head = head->next;
		counter++;
	}
	return (head);
}
