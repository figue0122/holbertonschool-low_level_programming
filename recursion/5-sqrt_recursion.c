#include "main.h"

/**
 * checker - function name
 * @n: var
 * @a: var
 * Return: int
 */

int checker(int n, int a)
{
	if (n * n == a)
		return (n);

	if (n * n > a)
		return (-1);

	return (checker(n + 1, a));
}

/**
 * _sqrt_recursion - function name square root
 * @n: int var
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
