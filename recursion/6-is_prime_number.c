#include "main.h"
int test(int n, int i);

/**
 * is_prime_number - function to determine if a number is
 * a prime number or not
 * @n: a given integer
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		/* 1 jamais premier */

		return (0);
	} else if (n == 2)
	{
		/* 2 toujours premier */

		return (1);
	}

	/* on test tous les autres diviseurs via test, à partir de 2 */

	return (test(n, 2));
}

/**
 * test - function that tests one divider at a time
 * @n: a given interger
 * @i: a interger
 * Return: 1 if no divisor is found,
 * and 0 if a divisor is found.
 */

int test(int n, int i)
{
	/* fonction qui teste tous les diviseurs */

	if (i * i > n)
	{
		/* aucun diviseurs trouvés, n est premier */

		return (1);

	}
	if (n % i == 0)
	{
		/* Un ou plusieurs diviseurs trouvé; n est pas premier */

		return (0);
	}

	/* Rappel de test en augmentant le divisuer i de 1 a chaque tour */
	/* pour vérifier si chaque itération divise n */

	return (test(n, i + 1));
}
