#include "main.h"

/**
 * jack_bauer - that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: every minute of the day.
 *
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 23 ; a++)
	{
		for (b = a + 1 ; b <= 59 ; b++)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');

			if (!(a == 23 && b == 59))
			{
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
