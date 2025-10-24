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

/*
int main(void)

    long a = 0;
    long b = 1;
    long sum = 0;       prochain terme de Fibonacci
    long sum_pair = 0;  somme des termes pairs

    while (1) veut dire boucle infinie (identique à for (;;) ou while (true))
    {
        sum = a + b;            génère le prochain terme

        if (sum > 4000000)      borne sur le terme que tu ajoutes
            break;

        if (sum % 2 == 0)       si pair, on l’additionne
            sum_pair += sum;

        a = b;                  avance la suite
        b = sum;
    }

    printf("%ld\n", sum_pair);
    return (0);
}
*/
