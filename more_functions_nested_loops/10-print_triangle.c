#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: variable
 */
void print_triangle(int size)
{
	int t, h;

	if (size > 0)
	{
	for (t = 1; t <= size; t++)
	{
		for (h = size - t; h > 0; h--)
		{
			_putchar(' ');
		}
		for (h = 0; h < t; h++)
		{
			_putchar('#');
		}
		if (t == size)
			continue;

		_putchar('\n');
	}


}
	_putchar('\n');
}
