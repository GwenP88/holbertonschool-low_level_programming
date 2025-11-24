#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int va_n;
	int power = 1;
	int rest = 0;
	int digit = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	} else if (n > 0)
	{
		va_n = n;
	} else if (n < 0)
	{
		_putchar('-');
		va_n = -n;
	}

	while ((va_n / power) >= 10)
	{
		power *= 10;
	}

	while (power >= 1)
	{
		digit = va_n / power;
		_putchar('0' + digit);
		rest = va_n % power;
		va_n = rest;
		power /= 10;
	}
}
