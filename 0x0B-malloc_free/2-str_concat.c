#include "main.h"
#include <stdlib.h>

/**
 * str_concat -   a function that concatenates two strings.
 * @s1: string one to concatenate
 * @s2: string one to concatenate
 * Return: pointer to concat string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int length1 = 0, length2 = 0, totalLength = 0;
	unsigned int i = 0, j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	totalLength = length1 + length2 + 1;
	ptr = (char *)malloc(totalLength);
	if (ptr == NULL) return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
