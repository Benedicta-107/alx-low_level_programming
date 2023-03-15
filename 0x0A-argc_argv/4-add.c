#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function to print the sum of positive numbers.
 * @argc: argument count
 * @argv: arguments vector.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, value, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (value = 0; argv[num][value]; value++)
		{
			if (argv[num][value] < '0' || argv[num][value] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
