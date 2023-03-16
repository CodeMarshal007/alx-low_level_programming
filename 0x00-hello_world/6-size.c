#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n", (int)sizeof(char), (int)sizeof(int), (int)sizeof(long int), (int)sizeof(long long int), (int)sizeof(float));
	return (0);
}
