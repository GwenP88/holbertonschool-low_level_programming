#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the list of single digit numbers of base 10 (prinf is forbiden)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}

	for (j = 'a' ; j <= 'f' ; j++)
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}
