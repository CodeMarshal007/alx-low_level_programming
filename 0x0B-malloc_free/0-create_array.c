#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes it with a specific char
 * @size:  the size of the memory to allocate
 * @c: char
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (i <= size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
