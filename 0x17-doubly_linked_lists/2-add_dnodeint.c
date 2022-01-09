#include "lists.h"
/**
 * add_dnodeint - adds node at beggining of dll
 * @head: pointer to pinter to head of dll
 * @n: data for new node
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		/* making sure temp is at start*/
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	new->next = temp;
	if (temp != NULL)
		temp->prev = new;
	*head = new;
	return (new);
}
