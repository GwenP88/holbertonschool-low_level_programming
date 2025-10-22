#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @n: Input integer.
 *
 * Return: the absolute value
 *
 */

int _abs(int n)
{
	int resultat = n;

	if (n < 0)
	{
		resultat = -n;
		return (resultat);
	}
	return (resultat);
}
