#include "main.h"
#include <stdio.h>

/**
 * string_toupper -   reverses the content of an array of integers
 * @str:  string
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)

			str[i] = str[i] - 32;

		i++;
	}

	return (str);
}
