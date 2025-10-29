#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  function that prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: is a number passed as a parameter
 *
 * Return: the result of adds
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
