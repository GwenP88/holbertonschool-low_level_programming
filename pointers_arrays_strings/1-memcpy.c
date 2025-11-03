#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: memory area source
 * @dest: memory area destination
 * @n: number of bytes to copy
 * Return: the dedstination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
