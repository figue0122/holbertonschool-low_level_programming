#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - Writes a fun that executes a func
 *@array: int
 *@action: int
 *@size: size_t
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
