#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the list of single digit numbers of base 10
 * separate by a virgule
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
