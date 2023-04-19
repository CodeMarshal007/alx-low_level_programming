#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stddef.h>

/**
 * DESC: Header file containing declarations for all functions
 * used in the 0x0F-function_pointers directory
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
