#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - The function to free the linked list & sets the head to NULL.
 * @head: The double pointer that points to the head of the linked list.
 *
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *latest;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		latest = *head;
		*head = (*head)->next;
		free(latest);
	}
	*head = NULL;
}
