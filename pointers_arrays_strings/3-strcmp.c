#include "main.h"

/**
 * _strncpy - function that copies the string pointed to by src
 * @dest: address where the copied string will be stored;
 * @src: address where the source string is stored;
 * @n:numbers of bytes of src.
 * Return: the copy of the sting pointed to by src;
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
