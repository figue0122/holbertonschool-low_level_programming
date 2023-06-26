#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int hex;
	int low;

	for (hex = '0'; hex <= '9'; hex++)
	{
	putchar(hex);
	}

	for (low = 'a'; low <= 'f'; low++)
	{
	putchar(low);
	}

	putchar('\n');

	return (0);

}
