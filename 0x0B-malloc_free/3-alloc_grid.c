#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return:  a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		ptr[i] = malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}