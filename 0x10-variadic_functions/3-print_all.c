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
	char *str;
	int i = 0, j, print_int;
	float print_float;
	va_list arg_list;

	va_start(arg_list, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg_list, int));
			break;
		case 'i':
			print_int = va_arg(arg_list, int);
			printf("%d", print_int);
			break;
		case 'f':
			print_float = (float)va_arg(arg_list, double);
			printf("%f", print_float);
			break;
		case 's':
			str = va_arg(arg_list, char *);
			printf("%s", (str != NULL) ? str : "(nil)");
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
	va_end(arg_list);
}
