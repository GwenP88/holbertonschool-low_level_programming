#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @accept: a string
 * @s: an other string to be compared
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				break;
			}
			j++;
			break;
		}
		i++;
	}
	return (s);
}
