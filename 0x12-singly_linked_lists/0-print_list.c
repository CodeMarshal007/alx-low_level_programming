#include "lists.h"

#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
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
	printf("[%d] %s\n", current->len,
			(current->str) == NULL ? "(nil)" : current->str);
	count++;
	current = current->next;
	}

	return (count);
}
