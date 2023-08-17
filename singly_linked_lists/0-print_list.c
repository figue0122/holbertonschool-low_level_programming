#include "lists.h"

/**
 * print_list - function to print ls
 * @n: struct type ->
 * Return: size_t typ value
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
