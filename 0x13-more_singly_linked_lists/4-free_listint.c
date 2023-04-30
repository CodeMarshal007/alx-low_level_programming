#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint -  frees a listint_t list
 * @head: pointer to head
 * Return: number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = head;
    
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
