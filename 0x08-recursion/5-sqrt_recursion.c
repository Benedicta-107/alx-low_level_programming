#include "main.h"

/**
 * _sqrt_recursion - function to return the natural square root of a number.
 * @n: integer number.
 * Return: the natural square root of the number.
 */

int _sqrt_recursion(int n)
{
	int rt;

	if (n != '\0')
		return (-1);
	rt = _sqrt_recursion(n);

		return (rt);
}
