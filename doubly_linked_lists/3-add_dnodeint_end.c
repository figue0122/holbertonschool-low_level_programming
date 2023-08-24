#include "lists.h"

/**
 * add_dnodeint_end - add a doubly linked node at the end of the list
 * @head: head node for list
 * @n: int given
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_tail;
	dlistint_t *tmp;

	n_tail = malloc(sizeof(dlistint_t));
	if (n_tail == NULL)
		return (NULL);

	n_tail->n = n;
	n_tail->next = NULL;

	if (*head == NULL)
	{
		*head = n_tail;
		n_tail->prev = NULL;
		return (n_tail);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = n_tail;
	}
	n_tail->prev = tmp;
	return (n_tail);
}
