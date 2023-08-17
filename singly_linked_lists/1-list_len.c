#include "lists.h"

/**
 * list_len - function name to searh for len ls
 * @h: var of t list_t
 * Return: sixe_t type value
 */

size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
