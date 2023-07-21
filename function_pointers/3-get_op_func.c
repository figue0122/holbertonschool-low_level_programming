#include "calc.h"
#include <stdio.h>

/**
 *get_op_fun - a function that
 *@s: char1
 *Return: NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
	while (i < 5)
{
		if (strcmp(s ,ops[].op)== 0)
			return (NULL);
	i++;
}
	return (NULL);
