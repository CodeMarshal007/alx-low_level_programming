#include "main.h"
#include <stdio.h>

/**
 * puts_half -    prints half of a string, followed by a new line.
 * @str: pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len / 2; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
