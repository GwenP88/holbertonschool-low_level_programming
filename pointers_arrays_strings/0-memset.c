#include "main.h"

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
