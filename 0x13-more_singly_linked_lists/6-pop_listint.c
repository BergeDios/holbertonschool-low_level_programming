#include "lists.h"
/**
 * pop_listint - function that deletes head node an returns his data
 * @head: pointer to head node
 * Return: head node int data
 */
int pop_listint(listint_t **head)
{
	int nodedata;
	listint_t *newhead, *temp;

	if (!*head)
		return (0);

	temp = *head;
	nodedata = temp->n;
	newhead = temp->next;
	free(temp);
	*head = newhead;
	return (nodedata);
}
