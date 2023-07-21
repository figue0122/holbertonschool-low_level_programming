#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#ifndef function_pointers_h
#define function_pointers_h

/**
 * print_name - function thats prints a name
 * @name: name
 * @f: pointwe
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
	}
	else
	{
		void (*a)(char *);

		a = f;
		(*a)(name);
	}
}
#endif
