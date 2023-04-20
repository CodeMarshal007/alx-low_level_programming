#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum up all of its parameters
 * @n: the number of parameters to sum
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list list_params;

	if (n == 0)
		return (0);

	va_start(list_params, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list_params, int);

	va_end(list_params);

	return (sum);
}
