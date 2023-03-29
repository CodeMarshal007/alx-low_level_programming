#include "main.h"
#include <stdio.h>

/**
 * reverse_array -   reverses the content of an array of integers
 * @a:  array
 * @n:  number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, val;

	for (; i < j; i++, j--)
	{
		val = a[i];

		a[i] = a[j];

		a[j] = val;
	}
}
