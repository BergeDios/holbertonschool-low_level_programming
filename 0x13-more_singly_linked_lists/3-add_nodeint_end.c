#include "lists.h"
/**
 * add_nodeint_end - add a node at the end
 * @head: pointer to head of the list
 * @n: const int for node data ->n
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (!*head)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
	temp->next = new;
	}
	return (*head);
}
