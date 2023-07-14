#include "main.h"

/**
 * printed a string using puts
 * Always 0.
 */

void _puts_recursion(char *s) {
	if (*s != '\0') {
	putchar(*s);
	_puts_recursion(s + 1);
	}
    else
    {
        putchar('\n');
}
