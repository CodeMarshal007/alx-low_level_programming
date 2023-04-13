#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string one
 * @s2: string 2
 * @n: byte size to concatenate in s2
 * Return: a pointer to a concatenated string in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len, s2Len, i, j;

	char *concatStr = NULL;

	s1Len = strlen(s1);

	if (s2 == NULL)
		s2 = " ";
	s2Len = strlen(s2);

	if (n >= s2Len)
		n = s2Len;

	concatStr = malloc(sizeof(char) * (s1Len + n));
	if (concatStr == NULL)
		return (NULL);

	for (i = 0; i < s1Len; i++)
		concatStr[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concatStr[i] = s2[j];

	concatStr[i] = '\0';
	return (concatStr);
}
