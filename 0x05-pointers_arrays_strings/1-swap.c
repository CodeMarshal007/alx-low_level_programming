#include "main.h"
#include <stdio.h>

/**
 * swap_int -   swaps the values of two integers
 * @a: pointer to an int parameter
 * @b: pointer to an int parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
