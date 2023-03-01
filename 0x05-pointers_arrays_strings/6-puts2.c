#include "main.h"

/**
 * puts2 - prints one char of a string
 * @str: the string that will contain the characters
 */
void puts2(char *str)
{
	int i = 0, len;

	while (str[i] != '\0')
		i++;
	for (len = 0; len < i; len += 2)
		_putchar(str[len]);

	_putchar('\n');
}
