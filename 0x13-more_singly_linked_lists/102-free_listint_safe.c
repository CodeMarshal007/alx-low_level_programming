#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to head of the list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, i;

	listint_t *next_node, *current_node = *h;
    
	listint_t *visited[1024] = {NULL};

	if (h == NULL || *h == NULL)
		return (count);

	while (current_node != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current_node == visited[i])
			{
				*h = NULL;
				return (count);
			}
		}

		visited[count] = current_node;
		count++;

		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*h = NULL;
	return (count);
}
