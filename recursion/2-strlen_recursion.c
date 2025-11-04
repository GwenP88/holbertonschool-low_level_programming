#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a pointed string
 * Return: an integer for the length of a string
 */

int _strlen_recursion(char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	else if (*s == '\0')
	{
		return (0);
	} else
		return (1 + _strlen_recursion(s + 1));
}
