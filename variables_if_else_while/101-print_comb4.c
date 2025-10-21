#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Numbers must be separated by ,
 * The two digits must be different (01 = 10)
 * prints in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0' ; i <= '7' ; i++)
	{
		for (j = '1' ; j <= '8' ; j++)
		{
			for (k = '2' ; k <= '9' ; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
