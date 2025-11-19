#include <stdlib.h>
#include <stdio.h>

/**
 * main - programme that that prints
 * the opcodes of its own main function.
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: the opcodes
 */


int main(int argc, char *argv[])
{
	int i;
	int nb_bytes;
	unsigned char *ptr_main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nb_bytes = atoi(argv[1]);
	if (nb_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr_main = (char *)main;
	for (i = 0; i < nb_bytes; i++)
	{
		printf("%02x ", ptr_main[i]);
	}
	printf("\n");

	return (0);
}
