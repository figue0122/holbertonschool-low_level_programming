#include "lists.h"

/**
 * add_node - function name to add a node
 * @head; array
 * @str: string
 * Return: list_t type value
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (str == NULL || new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}

	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);

}
