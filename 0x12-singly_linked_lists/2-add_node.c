#include "lists.h"

/**
 * add_node - adds a new node at the beginning of linked list
 * @str: string to be duplicated
 * @head: pointer to head of list
 * Return: address of new node or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	long int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	for (; str[i]; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

