#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: variable
 */

void puts_half(char *str)
{
	int i, j, l;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	}
	else
	{
		for (l = (i - 1) / 2; l < i - 1; l++)
		{
			_putchar(str[l + 1]);
		}
	}
	_putchar('\n');
}
