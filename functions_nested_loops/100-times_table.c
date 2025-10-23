#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n times table, starting with 0.
 *
 * @n: integer in parametre  of function
 *
 * Return: the 9 times table
 *
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%3d", i * j);
				if (j < n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}
