#include <stdio.h>
#include "main.h"

/**
 * void print_to_98 -  function that prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: is a number passed as a parameter
 * @b: is a second inteeger
 *
 * Return: the result of adds
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			int nbr = i;

			if (i < -9)
			{
				_putchar('-');
				nbr = -nbr;

				_putchar('0' + (nbr / 10));
				_putchar('0' + (nbr % 10));

			} else if (i < 0)
			{
				_putchar('-');
				nbr = -nbr;
				_putchar('0' +  nbr);
			} else if (i < 10)
			{
				_putchar('0' + nbr);
			} else if (i < 100)
			{
				_putchar('0' + (nbr / 10));
				_putchar('0' + (nbr % 10));
			} else if (i >= 100)
			{
				_putchar('0' + (nbr / 100));
				_putchar('0' + ((nbr / 10) % 10));
				_putchar('0' + (nbr % 10));
			}
			if (!(i == 98))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			int nbr = i;

			if (i >= 98 && i < 100)
			{
				_putchar('0' + (nbr / 10));
				_putchar('0' + (nbr % 10));
			} else if (i >= 100)
			{
				_putchar('0' + (nbr / 100));
				_putchar('0' + ((nbr / 10) % 10));
				_putchar('0' + (nbr % 10));
			}
			if (!(i == 98))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
