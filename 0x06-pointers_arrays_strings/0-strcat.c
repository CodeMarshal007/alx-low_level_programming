#include "main.h"
#include <stdio.h>

/**
* _strcat -  concatenates two strings.
* @dest: pointer to a string
* @src: pointer to a string
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
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

	for (i = destLen, j = 0; j < srcLen; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
