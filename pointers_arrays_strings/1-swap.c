#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: variable 1
 * @b: variable 2
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
