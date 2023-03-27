#include "main.h"
#include <stdio.h>

/**
 * rev_string -  prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0, j = 0;
	char ch;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{

		ch = s[i];

		s[i] = s[j];

		s[j] = ch;
	}
}
