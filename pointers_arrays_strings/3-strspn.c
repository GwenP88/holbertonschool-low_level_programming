#include "main.h"

/**
 * _strspn - that gets the length of a prefix substring.
 * @s: the string to be compared
 * @accept: list of accepted characters
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			j = 0;
			if (s[i] == accept[j])
			{
				break;
				j++;
			}
			i++;
		}
		break;
	}
	return (i);
}
