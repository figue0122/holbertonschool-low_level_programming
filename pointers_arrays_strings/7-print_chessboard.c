#include "main.h"

/**
 * print_chessboard - function name
 * @a: pointer array
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0 ; x < 8 ; y++)
	{
		if (y == 7)
		{
			_putchar(a[x][y]);
			_putchar('\n');
		}
	}
}
