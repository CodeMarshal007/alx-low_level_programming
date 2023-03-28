#include "main.h"
#include <stdio.h>

/**
 * print_array -    prints n elements of an array of integers
 * @a: array
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
