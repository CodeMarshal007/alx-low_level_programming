#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * _putchar - write a char to the std output
 * @c: char
 * Return: length of char written
 */
int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
