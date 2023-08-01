#include "main.h"

/**
 * _strncpy - function to copy string
 * Return: char
 * @dest: var
 * @src: var
 * @n: var
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n ; a++)
	{
		dest[a] = '\0';
	}
	return (dest);

}
