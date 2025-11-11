#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: Number of elements
 * @size: Size of an element
 *
 * Return: a pointer to the allocated memory or NULL if it's fail.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr = 0;
	unsigned int size_memory;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	size_memory = nmemb * size;

	ptr = malloc(size_memory);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= size_memory; i++)
		size = 0;

	return (ptr);
	free(ptr);
}
