#include "main.h"
/**
 * _strchr - locates a character un a string
 *@s: string
 *@c: variable
 * Return: a pointer of the first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
			return (s + i);
		s++;
		if (*s == c)
			return (s + i);
	}
	return (0);
}
