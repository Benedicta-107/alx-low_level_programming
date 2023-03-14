#include "main.h"
#include <stdio.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	while (*argv)
	{
		(void) argc;
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
