#include "main.h"

/**
 * jack_bauer - prints every min of day
 *
 */

void jack_bauer(void)
{
	int i, m;

	for (i = 0; i <= 23; i++)
		{
		for (m = 0; m <= 59; m++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			}
			}
}
