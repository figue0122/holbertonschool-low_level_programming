#include "lists.h"

/**
 * print_list - function to print ls
 * @h: struct type pointer
 * Return: size_t type value
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
