#include "lists.h"
/**
 * free_listint - frees a single linked list
 * @head: header of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
