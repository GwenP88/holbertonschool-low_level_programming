#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: address where the source string is stored;
 * Return: 0 if there are no numbers in the string,
 */

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int signe = 1;
	int digit;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			signe = -signe;
			i++;
		} else
			i++;

		if (s[i] == '\0')
			return (0);
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = (s[i] - '0');
		if (signe == -1)
		{
			result = (result * 10) - digit;
			i++;
		} else
		{
			result = (result * 10) + digit;
			i++;
		}
	}
	return (result);
}
