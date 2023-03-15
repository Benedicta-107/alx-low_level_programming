#include "main.h"
#include <stdio.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * @prod: to multiply
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int prod = 0;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);

			printf("%d\n", prod);
			return (0);
	}
	else
	{
	printf("Error\n");
	}
	return (1);
}
