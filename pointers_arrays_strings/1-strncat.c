#include "main.h"
/**
 * _strncat - concatenates two strings using a number of bytes.
 * @dest: destination
 * @src: source
 * @n: variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j + i] = src[i];

	return (dest);
}
