#include <stdio.h>

/**
 * main - Entry point
 * Description:  a program that prints the number of arguments passed into it
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments that was passed to the program.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	argc = argc - 1;

	printf("%d", argc);
	putchar('\n');

	return (0);
}
