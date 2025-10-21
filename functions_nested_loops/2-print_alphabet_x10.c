#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Description: uses _putchar to display each letter from “a” to 'z'
 */

void print_alphabet_x10(void)
{

	char j = 0;
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a'; j <= 'z' ; j++)
			{
				_putchar(j);
			}
			_putchar('\n');
	}
}
