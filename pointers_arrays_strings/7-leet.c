#include "main.h"

/**
 * leet -  function that encodes a string into 1337.
 * @s: a string
 * Return: the new encoded string
 */

char *leet(char *s)
{
	int i, j;
	const char *lettre = "aAeEoOlLtT";
	const char *chiffre = "4433001177";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < lettre[j] ; j++)
		{
			if (s[i] == lettre[j])
			{
				s[i] = chiffre[j];
			}
		}
	}
	return (s);
}

