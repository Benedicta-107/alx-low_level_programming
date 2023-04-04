#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Function to return the number of elements in a list.
 * @h: A pointer to the head of listint_t.
 *
 * Return: The number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
