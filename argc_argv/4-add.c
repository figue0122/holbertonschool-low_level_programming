#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * @argc: int var arg
 * @argv: char var pointer array
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int sum, num, a, b, c;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (c = 1; c < argc; c++)
	{
		num = atoi(argv[c]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
