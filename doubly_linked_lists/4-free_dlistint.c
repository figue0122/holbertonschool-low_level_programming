#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
