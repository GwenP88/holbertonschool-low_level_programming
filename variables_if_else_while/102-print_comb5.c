#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of two two-digits
 * the numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * The combination of numbers must be separated by comma, followed by a space
 * The two two-digits must be different (00 01 = 01 00)
 * prints in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 98 ; a++)
	{
		for (b = a + 1 ; b <= 99 ; b++)
		{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));

			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
