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
	int result = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}

		result = result + atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
