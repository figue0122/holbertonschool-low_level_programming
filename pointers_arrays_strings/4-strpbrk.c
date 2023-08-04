#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function name
 * @s: pointer
 * @accept: pointer
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0 ; accept[a] ; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
