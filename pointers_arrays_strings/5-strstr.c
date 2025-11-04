#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @needle: a string
 * @haystack: an other string to be compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j])
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
