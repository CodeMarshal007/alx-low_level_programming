#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number
 * @index: index, starting from 0 of the bit to set
 * 
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int index_bit_mask;

	if (n == NULL)
		return (-1);

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	index_bit_mask = 1 << index;

	*n = (*n) | index_bit_mask;

	return (1);
}
