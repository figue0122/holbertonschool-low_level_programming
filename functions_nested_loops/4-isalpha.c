#include "main.h"

/**
 * _isalpha - funtion that looks for alphabet char
 *
 * @c: variable
 * Return: 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
