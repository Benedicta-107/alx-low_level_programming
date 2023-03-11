#include "main.h"

/**
 * int _strlen_recursion - the recursive function that prints string length.
 * @s: the string.
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')

	a = 1 +  _strlen_recursion(s + 1);

	return (a);
}
