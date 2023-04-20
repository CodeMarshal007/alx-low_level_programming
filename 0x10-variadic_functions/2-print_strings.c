#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings
 * @n: number of strings passed to the function
 * @separator: string to be printed between strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_params;
	char *str;

	if (n == 0)
		return;

	va_start(list_params, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list_params, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list_params);
}
