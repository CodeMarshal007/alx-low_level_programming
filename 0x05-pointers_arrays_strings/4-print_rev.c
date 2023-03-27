#include "main.h"
#include <stdio.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
