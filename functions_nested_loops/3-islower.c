#include "main.h"

/**
 *  _islower - a function that checks for the lowercase character
 *
 *  Return: Always (succes)
 */

int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
		return (1);
	else
		return (0);
}
