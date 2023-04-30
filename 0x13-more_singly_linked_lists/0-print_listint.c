#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	if (h == NULL)
	{	
		return(count);
		exit(1);
	}

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
