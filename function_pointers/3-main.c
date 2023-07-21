#include "calc.h"
#include <stdio.h>

/**
 *
 *
 *
 */

int main(argc, char *argv[])
{ 		
	int (*op_fun)(int,int);
	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	op_fun = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n")
			exit (99);
	}
	if ((argv[2] == atoi ('/')|| atoi(argv[2]) = atoi ('%')) && atoi argv[3] == 0)
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", op_func(argv[1], argv[3]));
	return (0);
}
