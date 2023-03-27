#include "main.h"
#include <stdio.h>

/**
 * puts2 -   prints every other character of a string
 * starting with the first character, followed by a new line.
 * @s: pointer to a string
 * Return: void
 */
void puts2(char *s)
{
	int len = 0, i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
