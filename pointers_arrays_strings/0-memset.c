#include "main.h"

/**
 * _memset - memory function
 * @s: char ->
 * @b: char var
 * @n: unsigned int var
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
