#include "main.h"

/**
 * _strncat - cats two strings
 * Return: pointer to dest
 * @dest: var
 * @src: var
 * @n: var
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0 ; dest[a] != '\0' ; a++)
	{
	}

	for (b = 0; src[b] != '\0' && b < n ; b++)
	{
		dest[a] = src[b];
		a++;
	}

	if (b < n)
	{
		dest[a] = '\0';
	}
	return (dest);

}
