#include "main.h"
#include <stdio.h>

/**
 * cap_string -   capitalizes all words of a string
 * @str:  string
 * Return: capitalized first words
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '-'
		|| str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '('
		|| str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	return (str);
}

