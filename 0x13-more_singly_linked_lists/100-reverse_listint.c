#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to head
 * Return:  a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = NULL, *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	current_node = *head;
	*head = NULL;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = *head;
		*head = current_node;
		current_node = next_node;
	}

	return (*head);
}
