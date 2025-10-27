#include "main.h"

/**
 * _isupper -  function that checks for uppercase character.
 *
 * @c: the charactere to test
 *
 * Return: 1 if it's uppercase, else 0.
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
