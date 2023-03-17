#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this program print on'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
