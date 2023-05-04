#include "main.h"
#include <math.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0
 *  if there is one or more chars in the string b that is not 0 or 1
 * returns 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec_num = (dec_num << 1) | (b[i] - '0');
		i++;
	}
	return (dec_num);
}
