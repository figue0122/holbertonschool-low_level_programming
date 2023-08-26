#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function array
 * @size: int
 * @c: char var
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
			if (a == 0)
			return (NULL);

			for (x = 0 ; x < size ; x++)
			a[x] = c;

			return (a);
}
