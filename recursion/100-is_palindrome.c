#include "main.h"
#include <string.h>
#include <stdlib.h>

int _test_string(char *s, int i, int j);

/**
 * is_palindrome - function that test if a string is a palindrome.
 * @s: a string to test.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int i, j;
	int len = 0;
	int res = 0;

	if (s == NULL)
		return (0);
	else if (s[0] == '\0')
		return (1);

	len = strlen(s);
	i = 0;
	j = len - 1;

	res = _test_string(s, i, j);

	return (res);
}

/**
 * _test_string - function that compare the charactere of a string
 * and the same string but in reverse.
 * @s: a string to test.
 * @i: first index.
 * @j: second index.
 * Return: the result of comparison.
 */

int _test_string(char *s, int i, int j)
{
	int res_test = 0;

	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		res_test = _test_string(s, i + 1, j - 1);

	return (res_test);
}
