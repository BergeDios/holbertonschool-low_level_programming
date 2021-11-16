#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index num
 * @head: pointer to head of list
 * @index: number of node to be deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *delete;

	temp = *head;

	if (index != 0)
	{
		while (i < (index - 1) && temp)
		{
			temp = temp->next;
			i++;

		}
	}
	if (!temp || (temp->next == NULL && index != 0))
		return (-1);
	delete = temp->next;
	if (index == 0)
	{
		free(temp);
		*head = delete;
	}
	else
	{
		temp->next = delete->next;
		free(delete);
	}
	return (1);
}
