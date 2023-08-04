#include "main.h"

/**
 * _strspn - lenght of a prefix
 * @s: pointer
 * @accpet: pointer
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b = 0, c = 0;

	while (accept[b] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c++;
				a++;
				b = 0;
			}
			else if (accept[b] != s[a])
			{
				b++;
			}
		}
		return (c);
	}
	return (c);
}
