#include "main.h"
#include <stdio.h>

/**
 * Swaped var
 * @ a: variable
 * @ b: variable
 */

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

