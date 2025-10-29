#include "stdlib.h"
#include "stdio.h"

/**
 * main - program that finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 *
 * Return: 0 if ok
 */

int main(void)
{
	unsigned long nbr_donne = 612852475143UL;
	unsigned long max_facteur = 0UL;
	unsigned long i = 0UL;

	while (nbr_donne % 2 == 0)
		max_facteur = 2;

	for (i = 3; i <= nbr_donne / i; i += 2)
		while (nbr_donne % i == 0)
		{
			nbr_donne = nbr_donne / i;
			max_facteur = i;

			if (nbr_donne > 1)
				max_facteur = nbr_donne;
		}

	printf("%lu\n", max_facteur);
	return (0);
}
