#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int single;

	for (single = 0; single <= 9; single++)
	{
		putchar((single % 10) + '0');
	if (single == 9)
		continue;

	putchar(',');
	putchar(' ');

	}
	putchar('\n');

	return (0);
}
