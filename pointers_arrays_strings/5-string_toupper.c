#include "main.h"

/**
 * string_toupper - function to change the chars from lower to upper
 * @a: pointer
 * Return: char
 */

char *string_toupper(char *a)
{
	int i = 0, upper = 'a' - 'A';

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - upper;

		i++;
	}
	return (a);
}
