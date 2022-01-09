#include "lists.h"
/**
 * sum_dlistint - returns sum of all data of a dll
 * @head: pointer to head of linked list
 * Return: sum of all datas
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head->prev != NULL)
		head = head->prev;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
