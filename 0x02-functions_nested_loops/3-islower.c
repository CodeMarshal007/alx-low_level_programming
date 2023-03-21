#include "main.h"

/**
 * main - Entry point
 *
 * Description: ' checks for lowercase character'
 *
 * Return: 1 if c is lowercase, else 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
