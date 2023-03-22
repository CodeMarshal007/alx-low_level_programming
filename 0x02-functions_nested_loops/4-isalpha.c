#include "main.h"

/**
 * _isalpha - ' checks for alphabetic character'
 *
 * @c: single letter input
 *
 * Return: 1 if c is letter, else 0
 */

int _isalpha(int c)
{

	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
