#include "main.h"

/**
 * _isalpha - funt that looks for alphabeti char
 *
 * @c: variable
 * Return: 0
 **/

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

			return (1);

	else
		return (0);
}
