#include "main.h"

/**
 * factorial - the function to prinnt the factorial of a number.
 * @n: the number.
 * Return: factorial number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
