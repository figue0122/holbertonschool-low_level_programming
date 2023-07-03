#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet lower case
 *
 * Return: prints ten times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int abc = 9, m;
	char low;

	for (m = 0; m <= abc; m++)
	{
	for (low = 'a'; low <= 'z'; low++)

	_putchar(low);
	_putchar('\n');
	}
}
