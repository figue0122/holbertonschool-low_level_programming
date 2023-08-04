#include "main.h"

/**
 * pow_recursion - function name
 * @x: int var
 * @y: int var
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (x < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x,y - 1));
}
