#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 0;
	char j = 0;

	for (i = 'a'; i <= 'z' ; i++)
	{
		putchar (i);
	};

	for (j = 'A'; j <= 'Z' ; j++)
	{
		putchar (j);
	};

	putchar('\n');
	return (0);
}
