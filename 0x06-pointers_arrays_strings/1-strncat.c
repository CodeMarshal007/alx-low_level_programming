#include "main.h"
#include <stdio.h>

/**
 * _strncat -  concatenates two strings.
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of char to concat
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0, srcLen = 0, i, j;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	while (src[srcLen] != '\0')
	{
		srcLen++;
	}

	for (i = destLen, j = 0; j < n && j < srcLen; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
