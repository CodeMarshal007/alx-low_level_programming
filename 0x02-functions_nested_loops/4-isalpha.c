#include "main.h"

/**
 * main - Entry point
 *
 * Description: ' checks for alphabetic character'
 *
 * Return: 1 if c is letter, else 0
 */

int _isalpha(int c)
{

	if (c >= 'A' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
