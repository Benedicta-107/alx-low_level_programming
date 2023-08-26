#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the addition.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer (must not be 0).
 *
 * Return: The result of the division.
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - Computes the remainder of the division of two integers.
 * @a: The first integer.
 * @b: The second integer (must not be 0).
 *
 * Return: The remainder of the division.
 */
int mod(int a, int b)
{
	return (a % b);
}

