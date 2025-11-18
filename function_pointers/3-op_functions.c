#include "3-calc.h"

/**
 * op_add - function that add 2 integers
 *
 * @a: first integer
 * @b: seconde interger
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - function that substratc 2 integers
 *
 * @a: first integer
 * @b: seconde interger
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - function that multiplies 2 integers
 *
 * @a: first integer
 * @b: seconde interger
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - function that divides 2 integers
 *
 * @a: first integer
 * @b: seconde interger
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	int result;

	/* voir si b == 0?? return / exite / exit 100??*/

	result = a / b;
	return (result);
}

/**
 * op_mod - function that calculates the remainder of the division
 *
 * @a: first integer
 * @b: seconde interger
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
