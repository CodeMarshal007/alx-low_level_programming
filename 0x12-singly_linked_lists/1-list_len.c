#include "lists.h"

#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - prints all the elements of a list_t list
 * @h: head
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
		exit(98);
	}
	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
