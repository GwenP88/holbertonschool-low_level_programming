#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: the 9 times table
 *
 */

void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			n = i * j;

			if (j == 0)
			{
				_putchar('0' + n);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (n < 10)
				{
					_putchar(' ');
					_putchar('0' + n);
				}
				else
				{
					_putchar('0' + (n / 10));
					_putchar('0' + (n % 10));
				}
			}
		}
		_putchar('\n');
	}
}
