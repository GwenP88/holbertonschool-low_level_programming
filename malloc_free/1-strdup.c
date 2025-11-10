#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str.
 *
 * @str: a string to copy
 *
 * Return:
 *
 */

char *_strdup(char *str)
{
	char *copy = NULL;
	int i;
	int j = 0;
	int length = 0;

	while (str[j] != '\0')
	{
		length = str[j];
		j++;
	}

	copy = malloc(length * (sizeof(char)));

	if (str == NULL)
		return (NULL);
	else if (copy == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		copy[i] = str[i];

	return (copy);

	free(copy);
}
