#include "lists.h"

/**
 * get_dnodeint_at_index - get a certain node
 * @head: head node
 * @index: which node to get
 * Return: position of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0 ; index--)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
