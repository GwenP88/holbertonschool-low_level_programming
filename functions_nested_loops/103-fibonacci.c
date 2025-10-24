#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	long a = 0;
	long b = 1;
	long sum = 0;
	long sum_pair = 0;
	int i;

	while (a <= 4000000)
	{
		i = 1;
		sum = a + b;
		a = b;
		b = sum;
		i++;

		if (sum % 2 == 0)
		{
			sum_pair += sum;
		}
	}
	printf("%ld", sum_pair);
	printf("\n");
	return (0);
}
