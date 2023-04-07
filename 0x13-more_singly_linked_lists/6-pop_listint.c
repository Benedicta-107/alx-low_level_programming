#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function to delete a head node of a linked list.
 * @head: Double pointer to the head node.
 *
 * Return: the head node’s data (n).or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
