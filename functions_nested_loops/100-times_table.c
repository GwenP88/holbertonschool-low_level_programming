#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: integer in parametre  of function
 * Return: the 9 times table
 */

void print_times_table(int n)
{
	int i, j, res_multi;

	if (n < 0 || n > 15)
		return;
	else
	{
		for (i = 0; i <= n ; i++)
		{
			for (j = 0; j <= n ; j++)
			{
				res_multi = i *j;

				if (j == 0)
					_putchar('0' + res_multi);
				else
				{
					_putchar(',');
					_putchar(' ');

					if (res_multi < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + res_multi);
					}
					else if (res_multi < 100)
					{
						_putchar(' ');
						_putchar('0' + (res_multi / 10));
						_putchar('0' + (res_multi % 10));
					}
					else
					{
						_putchar('0' + (res_multi / 100));
						_putchar('0' + ((res_multi / 10) % 10));
						_putchar('0' + (res_multi % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
