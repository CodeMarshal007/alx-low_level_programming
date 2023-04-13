#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = calloc(nmemb, size);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
