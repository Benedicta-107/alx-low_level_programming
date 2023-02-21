#include <stdio.h>
#include "putchar.h"
/**
 * main - prints _putchar
 * Return: always returns 0
 *
 */
int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
