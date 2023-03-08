#include <stdio.h>

/**
 * main - print possible combinations of numbers 0-9
 * Return: Always (0)
 */

int main(void)
{

	int n;

	for (n = 0; n <= 9; n++)
{
	putchar((n % 10) + '0');

	if (n == 9)
	continue;
	putchar(',');
	putchar(' ');
}
	putchar ('\n');

	return (0);
}

