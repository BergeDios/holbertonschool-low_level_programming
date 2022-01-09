#include "lists.h"
/**
 * free_dlistint - frees a dll
 * @head: head of linked list pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
