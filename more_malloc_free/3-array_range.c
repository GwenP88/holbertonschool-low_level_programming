#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: interger min
 * @max: interger max
 *
 * Return: a pointer to array or NULL if it's fail.
 */

int *array_range(int min, int max)
{
	int *array = NULL;
	int array_size;
	int i;

	if (min > max)
		return (NULL);

	array_size = (max - min + 1);

	array = malloc(array_size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < array_size; i++)
		array[i] = min + i;

	return (array);
	free(array);
}
