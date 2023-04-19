#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stddef.h>

/**
 * print_name - a function that prints a name
 * @name:  name to print
 * @f:  pointer to a function || callback function
 *
 * DESC: Header file containing declarations for all functions
 * used in the 0x0F-function_pointers directory
 */
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
