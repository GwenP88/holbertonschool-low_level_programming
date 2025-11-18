#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - programme that performs simple operations
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: the result of the operation
 */

/* variable calc, int num1, int num2, operator */
/* utiliser atoi pour convertir les operator in int */
/* Return printf resultat de l'opération + \n */
/* si nb arg incorrect = printf erreur + exit(98) */
/* si operator invalide = printf erreur + exit(99) */
/* si division / 0 = printf erreur + exit(100) */
/* pas de while, do... while, for */
/* 3 if max */

int main(int argc, char * argv[])
{
	int num1 = 0;
	int num2 = 0;
	int (*calc)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	calc = get_op_func(operator);

	if (calc == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	if ((operator[0] = '/' && num2 == 0) || (operator[0] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit (100);
	}

	printf("%d\n", calc(num1, num2));
	return (0);
}
