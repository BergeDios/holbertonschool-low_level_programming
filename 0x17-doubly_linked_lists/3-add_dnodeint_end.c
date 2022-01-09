#include "lists.h"
/**
 * add_dnodeint_end - adds node at end of dll
 * @head: pointer to pointer to head
 * @n: data for new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
		*head = new;
	new->prev = temp;
	return (new);
}
