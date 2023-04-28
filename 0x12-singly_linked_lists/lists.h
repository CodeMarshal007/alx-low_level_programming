#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _putchar - write a char to the std output
 * @c: char
 * Return : length of char written
 */
int _putchar(char c);

/**
 * print_list - prints all the elements of a list_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_list(const list_t *h);

/**
 * list_len - prints all the elements of a list_t list
 * @h: head
 * Return: number of nodes
 */
size_t list_len(const list_t *h);

#endif
