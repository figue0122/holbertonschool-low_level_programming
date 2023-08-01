#include "main.h"

/**
 * reverse_array - function name for reversing an array
 * @a: pointer
 * @n: var
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
