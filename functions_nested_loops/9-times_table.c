#include "main.h"
/**
 * times_table - Write a funct that print 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int i, j, rslt;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	rslt = i * j;
	    printf("%d ", rslt);
	}
	printf("\n");
	}
}

