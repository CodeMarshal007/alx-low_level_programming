#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	operation = get_op_func(s);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(a, b);
	printf("%d\n", result);
	return (0);
}
