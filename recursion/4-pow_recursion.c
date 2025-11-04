#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y.
 * @x: a given interger
 * @y: a given interger
 * Return: the value of x raised to the power of y or -1 if y
 * is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	} else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
	/* multiplication de la base x par le résultat de la fonction appelée avec l’exposant diminué de 1 (en pre ordre), puis reconstruction la multiplication de la base X pas à pas avec la valeur de x à la puissance y en post ordre
	*/
}
