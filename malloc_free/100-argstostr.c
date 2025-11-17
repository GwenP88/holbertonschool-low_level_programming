#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: number of arguments of program
 * @av: array of arguments of program.
 *
 * Return:
 *
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;
	int length = 0;
	int total_size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i <= ac - 1; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length ++;
	}

	total_size = length + ac;

	ptr = malloc (total_size * sizeof(char));

	if (ptr == NULL)
		return (NULL);


}

