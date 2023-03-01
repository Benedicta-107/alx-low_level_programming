#include "main.h"

/**
 * puts_half- it prints half of the string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (str[len] != '\0')
		len++;
	if ((len % 2) == 0)
	{
		n = len / 2;
		for (i = n; i < len; i++)
		_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n + 1; i < len; i++)
		_putchar(str[i]);
	}
	_putchar('\n');
}
