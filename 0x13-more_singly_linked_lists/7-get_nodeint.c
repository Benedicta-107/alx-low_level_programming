#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function to get the index of the nth node.
 * @head: A head pointer to the head node.
 * @index: index of the nth node.
 *
 * Return: the nth node, or null if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *latest = head;

	for (j = 0; latest != NULL && j < index; j++)
		latest = latest->next;

	if (j == index && latest != NULL)
		return (latest);
	else
		return (NULL);
}
