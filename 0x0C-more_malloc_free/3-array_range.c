#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: number of elements
 * @max: size of each element
 * Return: a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(min + max * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= min + max; i++)
		arr[i] = i;

	return (arr);
}
