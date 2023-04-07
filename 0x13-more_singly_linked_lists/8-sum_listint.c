#include "lists.h"

/**
 * sum_listint - function that returns the sum of linked list.
 * @head: pointer to the head node.
 *
 * Return: sum of all the data, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *latest = head;

	while (latest != NULL)
	{
		sum += latest->n;
		latest = latest->next;
	}

	return (sum);
}
