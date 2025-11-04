#include "main.h"
int test(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root
 * of a number.
 * @n: a given interger
 * Return: the natural square root of a given number
 * or -1 to indicate an error, if the number doesn't have a
 * natural square root.
 */

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

/**
 * test - function to check that n is the product of
 * an integer i multiplied by itself.
 * @n: a given interger
 * @i: a interger
 * Return: the integer i if n is the product of i * i,
 * -1 if n isn't the product of i * i.
 */

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
