#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @needle: a string
 * @haystack: an other string to be compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
