#include <stdio.h>

/**
 * main - Entry point
 * Description:  a program that prints its name, followed by a new line.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments that was passed to the program.
 * Return: 0 (success)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s", argv[0]);
	putchar('\n');

	return (0);
}
