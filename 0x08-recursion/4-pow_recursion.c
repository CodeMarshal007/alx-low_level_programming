#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculate the value of x raised to the power of y
 * @x:  number
 * @y: number
 * Return:   the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{

	if (x == 1 || y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
