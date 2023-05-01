#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of the list
 *
 * Return: address of the node where the loop starts,
 *  or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t count = 0, i;
	listint_t *current_node;
	listint_t *visited[1024] = {NULL};

	if (head == NULL)
		return (NULL);

	current_node = head;

	while (current_node != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current_node == visited[i])
			{
				return (current_node);
			}
		}

		visited[count] = current_node;
		count++;

		current_node = current_node->next;
	}

	return (NULL);
}
