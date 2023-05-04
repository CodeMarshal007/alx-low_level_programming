#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needed to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int diff;

	count = 0;
	diff = n ^ m;

	for (; diff > 0; diff >>= 1)
		count += (diff & 1);

	return (count);
}
