#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: Input integer.
 *
 * Return: the last digit of a number.
 *
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = -last;
	}

	_putchar('0' + last);
	return (last);
}
