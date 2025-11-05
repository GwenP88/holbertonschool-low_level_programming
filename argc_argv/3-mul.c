#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: total number of arguments (including the programme name).
 * @argv: array of strings containing the arguments.
 * Return: 0 if everything is OK.
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d\n", a * b);
    return 0;
}
