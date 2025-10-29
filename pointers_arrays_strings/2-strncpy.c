#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: address where the copied string will be stored;
 * @src: address where the source string is stored;
 * @n:numbers of bytes of src.
 * Return: the copy of the sting pointed to by src;
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (src[i] < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
