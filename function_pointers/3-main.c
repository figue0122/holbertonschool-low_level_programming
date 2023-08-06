#include "function_pointers.h"
#include <stdio.h>
/**
 * main - main function for calculator
 * @argc: number of arguments
 * @argv: strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	res = get_op_func(argv[2]);

	if (!res)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
