#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (head == NULL || str == NULL)
		exit(98);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		exit(98);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		exit(98);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (new_node);
}
