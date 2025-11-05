#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: total number of arguments (including the programme name).
 * @argv: array of strings containing the arguments.
 * Return: 0 if everything is OK.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
