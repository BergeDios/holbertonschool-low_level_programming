#include "lists.h"
/**
 * print_dlistint - print all the nodes of a doubly linked lists
 * @h: pointer to head of linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (!h)
		return (num);
	while (h->prev != NULL)/* makes sure you at the start*/
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);


}
