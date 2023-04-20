#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0, j;
	char *s;
	va_list list_params;

	va_start(list_params, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list_params, int));
			break;
		case 'i':
			printf("%d", va_arg(list_params, int));
			break;
		case 'f':
			printf("%f", va_arg(list_params, double));
			break;
		case 's':
			s = va_arg(list_params, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		j = i + 1;
		if (format[j] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list_params);
}
