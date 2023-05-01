#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, i;

	const listint_t *node = head;

	const listint_t *visited[1024] = {NULL};

	while (node != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (node == visited[i])
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (count);
			}
		}
		visited[count] = node;
		count++;

		printf("[%p] %d\n", (void *)node, node->n);

		node = node->next;
	}

	return (count);
}
