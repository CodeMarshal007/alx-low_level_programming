#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head
 * @idx:  index of the list where the new node should be added
 * @n: integer value to add
 * Return: the address of the new node,
 *  or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *current_node = NULL, *prev_node = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	current_node = *head;
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = current_node;
		return (new_node);
	}
	for (i = 0; i <= idx && current_node != NULL; i++)
	{
		if (i == idx)
		{
			prev_node->next = new_node;
			new_node->next = current_node;
			return (new_node);
		}
		prev_node = current_node;
		current_node = current_node->next;
	}
	if(i < idx)
	{
		free(new_node);
		return (NULL);
	}
	free(new_node);	
	return (NULL);
}
