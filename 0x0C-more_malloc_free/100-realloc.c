#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a newMemory block using realloc
 * @ptr:a pointer to the newMemory previously allocated with a call to malloc
 * @old_size:  size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new newMemory block
 * Return: a pointer to the reallocated newMemory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newMem = NULL;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}
	if (ptr == NULL)
	{
		newMem = malloc(new_size);
		if (newMem == NULL)
			return (NULL);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newMem = malloc(new_size);
	if (newMem == NULL)
		return (NULL);
	if (new_size > old_size)
		memset((char *)newMem + old_size, 0, new_size - old_size);
	return (newMem);
}
