#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: double pointer to head
 * @index: index of node to delete
 * Return: 1 on success -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;
	unsigned int i = 0;

	temp1 = *head;
	if (temp1 != NULL)
		while (temp1->prev != NULL)
			temp1 = temp1->prev;
	while (temp1)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp2->next = temp1->next;
				if (temp1->next != NULL)
					temp1->next->prev = temp2;
			}
			free(temp1);
			return (1);
		}
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}
	return (-1);
}
