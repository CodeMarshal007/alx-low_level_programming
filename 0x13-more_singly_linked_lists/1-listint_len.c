#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	if (h == NULL)
	{
		return (count);
		exit(1);
	}

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
