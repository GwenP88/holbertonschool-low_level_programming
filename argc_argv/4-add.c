#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: total number of arguments (including the programme name).
 * @argv: array of strings containing the arguments.
 * Return: 0 if everything is OK.
 */

int main(int argc, char *argv[])
{
	int i, j;
    int sum = 0;

	if ( argc == 1)
		printf("0\n");

    for (i = 1; i < argc; i++)
    {
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
				sum += atoi(*argv);
		}
		printf("%d\n", sum);
	}
    return 0;
}


