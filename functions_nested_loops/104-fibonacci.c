#include <stdio.h>
#define BASE 1000000000L

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	long head_a = 0;
	long tail_a = 1;
	long head_b = 0;
	long tail_b = 1;
	long head_sum;
	long tail_sum;
	long retenue;
	int i;

	printf("1, ");
	for (i = 0; i < 96 ; i++)
	{
		tail_sum = tail_a + tail_b;
		retenue = tail_sum / BASE;
		tail_sum = tail_sum % BASE;
		head_sum = head_a + head_b + retenue;

		if (head_sum == 0)
		{
			printf("%ld", tail_sum);
		}
		else
		{
			printf("%ld%09ld", head_sum, tail_sum);
		}

		head_a = head_b;
		tail_a = tail_b;
		head_b = head_sum;
		tail_b = tail_sum;

		if (i < 95)
			printf(", ");
	}
	printf("\n");

	return (0);
}
