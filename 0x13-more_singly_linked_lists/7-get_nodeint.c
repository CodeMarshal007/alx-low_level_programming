#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index -  gets the nth node of a listint_t linked list.
 * @head: head
 * @index:  index of the node, starting at 0
 * Return: returns the nth node of a listint_t linked list,
 *  or NULL if the node deos not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *found_node = NULL;
	unsigned int i;

	if (head == NULL)
		return (found_node);

	found_node = head;

	for (i = 0; i <= index && found_node != NULL; i++)
	{
		if (i == index)
			return (found_node);
		found_node = found_node->next;
	}
	return (NULL);
}
