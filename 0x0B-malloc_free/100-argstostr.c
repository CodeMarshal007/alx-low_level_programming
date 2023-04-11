#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of a program
 * @ac: argument count
 * @av: array of strings
 * Return:  void
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;

	char *ptr = NULL;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			ptr[k] = av[i][j];
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
