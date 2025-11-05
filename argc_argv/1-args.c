#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: total number of arguments (including the programme name).
 * @argv: array of strings containing the arguments.
 * Return: 0 if everything is OK.
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
