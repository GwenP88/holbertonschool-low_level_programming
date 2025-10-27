#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed.
 */

void print_line(int n)
{
	int i = 1;

	for (i = 1 ; i <= n ; i++)
		_putchar('_');
	_putchar('\n');
}
