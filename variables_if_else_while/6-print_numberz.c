#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int single;

	for (single = 0; single < 10; single++)
	putchar((single % 10) + '0');
	putchar('\n');

	return (0);

}
