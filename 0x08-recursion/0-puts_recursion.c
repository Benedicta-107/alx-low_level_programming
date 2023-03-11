#include <stddef.h>
#include "main.h"

/**
 * _puts_recursion - the function that prints the string.
 * @s: the string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
