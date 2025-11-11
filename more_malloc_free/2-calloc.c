#include "main.h"
#include <stdlib.h>
#include <string.h>
char *_memset(char *s, char b, unsigned int n);

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
	void *ptr = 0;
	unsigned int size_memory;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	size_memory = nmemb * size;

	ptr = malloc(size_memory);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size_memory);

	return (ptr);
	free(ptr);
}


/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area pointed
 * @b: constant byte
 * @n: number of bytes
 * Return: the memory area pointed
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n == 0 || s == 0)
		return (s);

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
