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
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(*array));
		for (i = 0; i < height; i++)
			array[i] = malloc(width * sizeof(**array));

	if (array == NULL)
		return (NULL);

	return (array);

	for (i = 0; i < height; i++)
		free(array[i]);
	free(array);
}
