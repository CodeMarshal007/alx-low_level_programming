#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list
 * @head: head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current, *next_node;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
