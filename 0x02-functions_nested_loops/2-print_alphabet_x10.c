#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'prints 10 times the alphabet, in lowercase'
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	char asc;
	int i = 1;

	for (; i <= 10; i++)
	{

		for (asc = 'a'; asc <= 'z'; asc++)
		{
			_putchar(asc);
		};

		_putchar('\n');
	}
}
