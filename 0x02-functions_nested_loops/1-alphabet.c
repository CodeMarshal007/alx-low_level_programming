#include "main.h"

/**
 * main - Entry point
 *
 *print_alphabet: 'prints the alphabet, in lowercase'
 *
 * Return: void
 */

void print_alphabet(void)
{

	char asc;

	for (asc = 'a'; asc <= 'z'; asc++)
	{
		_putchar(asc);
	};
	_putchar('\n');
}
