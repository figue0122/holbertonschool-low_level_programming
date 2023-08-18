#include "lists.h"

/**
 * free_list - function that frees up memory used by the list
 * @head: pointer
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
