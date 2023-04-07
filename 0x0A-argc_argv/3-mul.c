#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that multiplies two numbers.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments that was passed to the program.
 * Return: 0 if success, else 1.
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc < 3)
	{
		puts("Error");

		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d", result);

	putchar('\n');

	return (0);
}
