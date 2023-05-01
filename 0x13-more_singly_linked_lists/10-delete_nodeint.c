#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list
 * @head: pointer to head
 * @index:  index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = NULL, *prev_node = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	for (i = 0; i <= index && current_node != NULL; i++)
	{
		if (i == index)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
	}

	return (-1);
}
