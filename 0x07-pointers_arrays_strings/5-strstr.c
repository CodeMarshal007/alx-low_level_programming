#include "main.h"
#include <stdio.h>

/**
 * _strstr -  locates a substring
 * @haystack:  string to search in
 * @needle: string to match
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, first_occurrence = -1;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			if (first_occurrence == -1)
			{
				first_occurrence = i;
			}
			j++;
			if (needle[j] == '\0')
			{
				return (&haystack[first_occurrence]);
			}
		}
		else
		{
			first_occurrence = -1;
			j = 0;
		}
		i++;
	}

	return (NULL);
}
