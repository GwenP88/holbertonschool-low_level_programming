#include "main.h"

/**
 * rev_string - unction that reverses a string.
 * followed by a new line.
 * @s: a pointer to a string;
 */

void rev_string(char *s)
{
	char *start = s;
	char *end;
	char tmp;

	while (*s != '\0')
	{
		s++;
	}

	end = s - 1;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

