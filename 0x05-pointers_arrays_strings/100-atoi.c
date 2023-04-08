#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that converts a string to an integer
 * @s: pointer to the source string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
			sign = -1;

			i++;
		}
    
		if (s[i] < '0' || s[i] > '9')
		{
			i++;
			continue;
		}
		num = num * 10 + (s[i] - '0');
	
		i++;
	}
	return (num * sign);
}
