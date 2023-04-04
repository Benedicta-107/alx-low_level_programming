#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function to print all the elements of the list.
 * @h: It is a pointer to the head of the listint list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
