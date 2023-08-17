#include "lists.h"

/**
 * add_node_end - function that adds a node at the end of a list
 * @head: array
 * @str: string
 * Return: list_t type value
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *tmp;

	new_tail = malloc(sizeof(list_t));
	if (str == NULL || new_tail == NULL)
		return (NULL);

	new_tail->str = strdup(str);
	new_tail->len = strlen(str);
	if (new_tail->str == NULL)
	{
		free(new_tail);
		return (NULL);
	}
	new_tail->next = NULL;
	if (*head == NULL)
	{
		*head = new_tail;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_tail;
	}
	return (new_tail);
}
