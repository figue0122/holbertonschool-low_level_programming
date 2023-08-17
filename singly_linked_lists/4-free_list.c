#include "lists.h"

/**
 * free_list - function that frees up memory used by lst
 * @head: -->
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
