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
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];

	copy[length] = '\0';
	return (copy);
}
