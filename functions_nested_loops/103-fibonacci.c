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
	int i;

	while (sum < 4000000)

	{
		i = 1;
		sum = a + b;
		printf("%ld, ", sum);
		a = b;
		b = sum;
		i ++;

	}
	printf("\n");

	return (0);
}
