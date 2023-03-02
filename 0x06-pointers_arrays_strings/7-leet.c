#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *m = "aeotl";
	char *M = "AEOTL";
	int x[] = {'4', '3', '0', '7', '1'};
	int i;
	char *p = str;

	while (*str != '\0')
	{

	for (i = 0; i < 5; i++)
	{
		if (*str == *(m + i) || *str == *(M + i))

			*str = x[i];
	}
		str++;

	}
		return (p);
}
