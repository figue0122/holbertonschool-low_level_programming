#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *print_to_98 - prints to 98
 *Return: 0
 *@n: number given
 */

void print_to_98(int n)
{



	for ( ; n != 98; )
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
