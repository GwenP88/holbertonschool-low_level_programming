#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer.
 *
 * Return: always 0
 *
 */

int _abs(int)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
