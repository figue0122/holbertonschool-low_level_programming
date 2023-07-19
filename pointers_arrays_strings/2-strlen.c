#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: variable
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
