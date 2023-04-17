#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from
 * return: zero if success
 */

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
