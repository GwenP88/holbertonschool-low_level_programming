#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str.
 *
 * @str: a string to copy
 *
 * Return: NULL if str is NULL or a pointer to the copy.
 *
 */

char *_strdup(char *str)
{
	char *copy = NULL;
	int i;
	int j = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		length = str[j];
		j++;
	}

	copy = malloc(length + 1 * (sizeof(char)));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= length - 1; i++)
		copy[i] = str[i];

	return (copy);

	free(copy);
}
