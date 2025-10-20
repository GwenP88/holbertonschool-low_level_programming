#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 0;

	for (i = 'a'; i <= 'z' ; i++)
	{
		putchar (i);
	};

	putchar('\n');
	return (0);
}
