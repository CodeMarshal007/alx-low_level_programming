#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 -  frees a listint_t list and sets the head to NULL
 * @head: pointer to head
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next = NULL;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL
}
