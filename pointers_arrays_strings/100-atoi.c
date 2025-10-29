#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: address where the source string is stored;
 * Return: 0 if there are no numbers in the string,
 */

int _atoi(char *s)
{
	int i = 0;
	int resultat = 0;
	int nombre;
	int signe = + 1;

	while( s[i] == ' ' || s[i] == '\t' ||
		   s[i] == '\n' || s[i] == '\v' ||
		   s[i] == '\f' || s[i] == '\r' )
	{
		i++;
	}

	if (s[i] == '-')
	{
		signe = - 1;
		i++;
	} else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		nombre = s[i] - '0';
		resultat = (resultat * 10) + nombre;
		i++;
	}
	return(signe * resultat);
}
