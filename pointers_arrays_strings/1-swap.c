#include "main.h"
#include <stdio.h>

/**
 * Swaped var
 * @ a
 * @ b
 */

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

