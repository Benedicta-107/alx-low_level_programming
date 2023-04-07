#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - The function to free the linked list.
 * @head: The pointer that points to the head of the linked list.
 *
 * Return: 0.
 */

void free_listint(listint_t *head)
{
	listint_t *latest = head;

	while (head != NULL)
	{
		head = head->next;
		free(latest);
	}
}


