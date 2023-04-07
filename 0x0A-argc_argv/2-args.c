#include <stdio.h>

/**
 * main - Entry point
 * Description:   a program that prints all arguments it receives.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments that was passed to the program.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);

	putchar('\n');

	return (0);
}
