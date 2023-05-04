#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index, starting from 0 of the bit to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int index_bit_mask;
	int bit_value;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	index_bit_mask = 1 << index;

	bit_value = (n & index_bit_mask) ? 1 : 0;

	return (bit_value);
}
