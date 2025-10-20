#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 0;

	for (i = 'z'; i >= 'a' ; i--)
	{
		putchar (i);
	};

	putchar('\n');
	return (0);
}
