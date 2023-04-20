#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: the sum of all its parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_params;

	if (n == 0)
	{
		va_end(list_params);
		return;
	}

	va_start(list_params, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_params, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list_params);
}
