#include "main.h"
#include <stdio.h>

/**
 * _strlen -  returns the length of a string
 * @s: pointer to a string
 * Return: void
 */
int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
