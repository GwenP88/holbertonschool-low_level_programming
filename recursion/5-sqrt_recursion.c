#include "main.h"

/**
 * factorial - function that returns the natural square root
 * of a number.
 * test - function to check that n is the product of
 * an integer i multiplied by itself.
 * @n: a given interger
 * @i: a interger
 * Return: the natural square root of a given number
 * or -1 to indicate an error, if the number doesn't have a
 * natural square root.
 */
int test(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (test(n, 1));
}

int test(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (test(n, i + 1));
}
