#include <stdio.h>

/**
 * Main - Print alphabet in lowercase and uppercase
 *
 *
 * Return: Always 0
 */
int main(void)
{
  char Az;
	for(Az = 'a'; Az <= 'z'; Az++)
	putchar(Az);

	for(Az = 'A'; Az <= 'Z'; Az++)
	putchar(Az);

	putchar('\n');

	return (0);
}
