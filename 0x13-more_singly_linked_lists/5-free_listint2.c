#include "lists.h"
/**
 * free_listint2 - free a linked list and set head to null
 * @head: pointer to head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	if (head)
	{
		temp = *head;
		while ((temp2 = temp))
		{
			temp = temp->next;
			free(temp2);
		}
		*head = NULL;
	}
}
