#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: a char
 * @size: the size of array
 *
 * Return: NULL if size = 0, 1 if it's fails or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	else if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

	free(array);
}
