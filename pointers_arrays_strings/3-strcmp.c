#include "main.h"

/**
 * _strcmp - function to compare two strings
 * Return: number
 * @s1: var
 * @s2: var
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0 ; s1[n] != '\0' ; n++)
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
	}
	return (0);
}
