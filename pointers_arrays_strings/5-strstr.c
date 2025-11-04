#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @needle: the substring containing the occurrences
 * to be searched for.
 * @haystack: the string in which to search for occurrences
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
		while (needle[j] != '\0' && haystack[i + j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			} else if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
			i++;
	}
	return (NULL);
}
