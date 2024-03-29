#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Function to add new node at the beginning of listint_t list.
 * @head: A pointer to a pointer to the head of listint_t linked list.
 * @n: The new node to be added at the beginning of the linked list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


