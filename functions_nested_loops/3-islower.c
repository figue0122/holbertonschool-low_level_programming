#include "main.h"

/**
 *  _islower - a function that looks for the lowercase character
 *
 * @c: variable
 * Return: Always (succes)
 */

int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
		return (1);
	else
		return (0);
}
