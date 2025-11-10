#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: the width of a 2 dimensional array
 * @height: the height of a 2 dimensional array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 *
 */

int **alloc_grid(int width, int height)
{
	int **array = 0;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(*array));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		array[i] = malloc(width * sizeof(**array));

	return (array);

	for (j = i - 1; j >= 0; j--)
		free(array[j]);
	free(array);
	return (NULL);
}
