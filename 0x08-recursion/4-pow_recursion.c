#include "main.h"

/**
 * _pow_recursion - function to return the value of 'x' raise to power 'y'.
 * @x: base value number.
 * @y: power value number.
 * Return: x raised to the power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
