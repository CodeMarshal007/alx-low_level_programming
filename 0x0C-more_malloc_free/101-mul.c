#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that multiplies two positive numbers
 * @argc:argument count
 * @argv:  array of arguments
 * Return: result
 */
int main(int argc, char **argv)
{
	long int num1, num2, result;
	int i, j;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = atoll(argv[1]);
	num2 = atoll(argv[2]);

	result = num1 * num2;

	printf("%ld\n", result);
	return (0);
}
