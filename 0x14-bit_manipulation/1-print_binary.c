#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number
 * @n: number to print its binary representation
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	int significant_bit = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			printf("1");
			significant_bit = 1;
		}
		else if (significant_bit)
			printf("0");
	}
}
