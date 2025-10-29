#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: the interger
 */

void print_number(int n)
{
	int last_digit = 0;

	/* TODO: si n < 0, _putchar('-'); */
	if (n < 0)
	{
		last_digit = -(n % 10);
		_putchar('-');
		_putchar('0' + last_digit);
	}
}
