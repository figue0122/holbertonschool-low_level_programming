#include "main.h"

/**
 * print_sign - prints the sing of a number
 *
 * @n: variable
 * Return: 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);

	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
