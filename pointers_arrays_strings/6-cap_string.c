#include "main.h"

/**
 * cap_string - function name
 * Return: char
 * @a: var
 */

char *cap_string(char *a)
{
	int i, n;
	char x[13] = { ' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}

		for (n = 0 ; n < 13 ; n++)
		{
			if (a[i] == x[n])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] -= 32;
				}
			}
		}
	}
	return (a);
}
