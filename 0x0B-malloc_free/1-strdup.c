#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter
 * @str:  string to duplicate
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int length = 0, i = 0;

	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
		length++;

	ptr = (char *)malloc(length + 1);

	if (ptr == NULL)
		return (NULL);

	while (i <= length)
	{
		ptr[i] = str[i];

		i++;
	}

	return (ptr);
}
