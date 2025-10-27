#include "main.h"

/**
 * _isdigit -  function that checks for uppercase character.
 *
 * @c: the digit to test
 *
 * Return: 1 if it's a digit, else 0.
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
