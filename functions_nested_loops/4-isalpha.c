#include "main.h"

/**
 * _isalpha - function for checks for alphabetic character.
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise.
 *
 * @c: character code to test
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
