#include "lists.h"
/**
 * add_nodeint - add a node at the beggining
 * @head: pointer to head node of the list
 * @n: const int for n data in node
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
