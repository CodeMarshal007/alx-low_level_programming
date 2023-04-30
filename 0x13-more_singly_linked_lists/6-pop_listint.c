#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *  and returns the head node’s data (n).
 * @head: pointer to head
 * Return: the value of the deleted node's data (n),
 *  or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *node_to_del = NULL;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	node_to_del = *head;
	*head = node_to_del->next;
	n = node_to_del->n;
	free(node_to_del);
	return (n);
}
