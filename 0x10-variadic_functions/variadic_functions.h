#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * sum_them_all - sum up all of its parameters
 * @n: the number of parameters to sum
 * Return: the sum of all its parameters.
 *
 * DESC: Header file containing declarations for all functions
 * used in the 0x10-variadic_functions directory
 */

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
/**
 * print_numbers -  prints numbers
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * print_strings -  prints strings
 * @n: number of strings passed to the function
 * @separator: string to be printed between strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * print_all -  prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char *const format, ...);

#endif
