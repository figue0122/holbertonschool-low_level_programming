#include "lists.h"

<<<<<<< HEAD
/**
 * print_dlistint - print doubly linked list of ints
 * @h: list ints
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

=======
/*print_dlistint - print doubly linked list of ints
@h: list ints
* Return: count*/

size_t print_dlistint(const dlistint_t *h)
{
        int i;
        
        for (i = 0; h; i++)
        {   
                printf("%d\n", h->n)
                h = h->next;
        }
        return (i);
}
>>>>>>> bacbbb991c72c1a34887a4af0659b4201e1c49a7
