#include "main.h"

/**
 * _print_rev_recursion - the recursive function that prints string in reverse.
 * @s: the string to be printed reversely.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
