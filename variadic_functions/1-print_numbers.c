#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function name
 * @separator: char ->
 * @n: unsigned int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);
		while (i < n)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
