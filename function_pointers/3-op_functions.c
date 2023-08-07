#include "3-calc.h"

/**
 * op_add - function name for addition operation
 * @a: int 1
 * @b: int 2
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function name for subtraction operation
 * @a: int 1
 * @b: int 2
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function name for multiplication operation
 * @a: int 1
 * @b: int 2
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function name for division operation
 * @a: int 1
 * @b: int 2
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function name for modulus operation
 * @a: int 1
 * @b: int 2
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

