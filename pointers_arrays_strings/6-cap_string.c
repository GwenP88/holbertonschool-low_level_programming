#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @s: a string in lowercase
 * Return: the new string.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
		    s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' ||
			s[i] == '"')

			{
				s[i + 1] += 32;
				i++;
			}
	}
	return (s);
}
