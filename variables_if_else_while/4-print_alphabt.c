#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and don't print q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 0;

	for (i = 'a'; i <= 'z' ; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar (i);
		}
	}

	putchar('\n');
	return (0);
}
