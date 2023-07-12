#include "main.h"

/**
 * _abs - absolute value
 *
 * @a: variable
 * Return: absolute value
 *
 */

int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
