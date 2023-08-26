#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function name
 * @str: char pointer
 * Return: char
 */

char *_strdup(char *str)
{
	char *a;
	int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0 ; str[x] != '\0' ; x++)
		;

	a = malloc(x * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (y = 0 ; y < x ; y++)
		a[y] = str[y];

	a[y] = '\0';

	return (a);
}
