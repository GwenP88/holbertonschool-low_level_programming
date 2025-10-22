#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: Input integer.
 *
 * Return: the last digit of a number.
 *
 */

int print_last_digit(int n)
{
	int resultat = n;

	_putchar ('0' + (n % 10));
	return (resultat);
}
