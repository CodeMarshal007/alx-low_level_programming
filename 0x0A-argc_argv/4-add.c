#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description:  a program that adds positive numbers.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments that was passed to the program.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int result = 0, i = 0;

	if (argc == 1)
	{
		printf("%d", 0);

		putchar('\n');

		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			puts("Error");

			putchar('\n');

			return (1);
		}
		else

			result = result + atoi(argv[i]);
	}

	printf("%d", result);

	putchar('\n');

	return (0);
}
