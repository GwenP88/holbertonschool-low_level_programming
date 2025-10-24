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
	long sum;
	int i;


	for (i = 0; i < 50 ; i++)
	{
		sum = a + b;
		printf("%ld", sum);
		a = b;
		b = sum;

		if (i < 49)
			printf(", ");
	}
	printf("\n");

	return (0);
}
