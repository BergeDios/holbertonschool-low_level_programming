#include "lists.h"
/**
 * dlistint_len - counts numbers of nodes in a dll
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);
	while (h->prev != NULL)/*making sure at start*/
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
