#include "lists.h"

/**
 * dlistint_len - function name to search for list lenght
 * @h: given var of type list_t
 * Return: size_t type value
 */

size_t dlistint_len(const dlistint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
