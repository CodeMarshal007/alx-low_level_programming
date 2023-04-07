#include <stdio.h>

/**
 *DESC -  a program that prints its name, followed by a new line.
 *main - entry point
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s", argv[0]);
	putchar('\n');

	return (0);
}
