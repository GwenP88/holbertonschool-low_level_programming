#include "main.h"

/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * followed by a new line.
 * @str: a pointer to a string;
 */

void puts_half(char *str)
{
	char *start = str;
	char *end;
	int length = 0;
	int indice_start;

	while (*str != '\0')
	{
		str++;
	}
	length = str - start;
	indice_start =  (length + 1) / 2;
	end = start + indice_start;

	while (*end != '\0')
	{
		_putchar(*end);
		end++;
	}
	_putchar('\n');
}
