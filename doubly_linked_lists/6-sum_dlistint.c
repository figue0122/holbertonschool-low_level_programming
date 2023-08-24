#include "lists.h"

/**
 * sum_dlistint - sum all data in list
 * @head: head node
 * Return: sum of all data or 0 if error
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
