#include "main.h"
#include <stdio.h>

/**
 * _strcmp -  compares two strings.
 * @s1:  string
 * @s2:  string
 * Return: an integer less than, equal to, or greater than zero, 
 * depending on whether s1 is less than, equal to, or greater than s2
 */

int _strcmp(char *s1, char *s2)
{

	int s1Len = 0, i;

	if (s1 == NULL || s2 == NULL)
	{
		return 0;
	}

	while (s1[s1Len] != '\0')
	{
		s1Len++;
	}

	for (i = 0; i <= s1Len; i++)
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
