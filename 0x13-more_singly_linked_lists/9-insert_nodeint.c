#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to header
 * @idx: index number where node should be added
 * @n: n data for new node
 * Return: address of new node o NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	temp = *head;
	if (!temp && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		while (i < (idx - 1) && temp)
		{
			temp = temp->next;
			i++;
		}
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
