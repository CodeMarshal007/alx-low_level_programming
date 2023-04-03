#include "main.h"
#include <stdio.h>

/**
 * _memcpy -  copies memory area
 * @dest:  destination to copy to
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: a pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}

	return (dest);
}
