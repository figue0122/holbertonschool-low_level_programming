#include "main.h"
/**
 * _puts - prints a string
 * @str: variable
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
