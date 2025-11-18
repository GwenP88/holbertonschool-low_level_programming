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


int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int (*calc)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	calc = get_op_func(operator);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", calc(num1, num2));
	return (0);
}
