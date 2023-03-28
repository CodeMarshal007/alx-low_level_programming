#include "main.h"
#include <stdio.h>

/**
 * _strcpy -    prints n elements of an array of integers
 * @src: pointing to source string
 * @dest: pointing to destination string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[len] != '\n')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
