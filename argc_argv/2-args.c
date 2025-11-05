#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: total number of arguments (including the programme name).
 * @argv: array of strings containing the arguments.
 * Return: 0 if everything is OK.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
