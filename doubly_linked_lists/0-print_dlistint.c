#include "lists.h"

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