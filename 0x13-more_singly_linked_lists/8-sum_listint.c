#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: head
 * Return: the sum of all the data (n) of a listint_t linked list,
 *  or if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *next_node = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	next_node = head;

	while (next_node != NULL)
	{
		sum += next_node->n;
		next_node = next_node->next;
	}

	return (sum);
}
