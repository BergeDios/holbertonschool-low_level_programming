#include "lists.h"
/**
 * sum_listint - returns sum of all the n data of nodes
 * @head: header of the list
 * Return: sum of data n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
