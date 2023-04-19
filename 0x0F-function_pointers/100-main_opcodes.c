#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number_of_bytes; i++)
		printf("%02x ", ((unsigned char *)main)[i]);

	printf("\n");
	return (0);
}
