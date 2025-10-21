#include "main.h"

/**
 * _islower - function for checks for lowercase character.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 * @c: character code to test
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
