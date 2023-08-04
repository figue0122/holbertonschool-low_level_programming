#include "main.h"
#include <stddef.h>

/**
 * _strstr - function name
 * @haystack: pointer
 * @needle: pointer
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b = 0;

	while (needle[b] != '\0')
		b++;

	while (*haystack)
	{
		for (a = 0 ; needle[a] ; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
