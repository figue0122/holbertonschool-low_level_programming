#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print the alphabet w/o q and e.
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	if (ab != 'e' && ab != 'q')
	putchar(ab);
	putchar('\n');

	return (0);
}
