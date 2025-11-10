#include "main.h"
#include <stdlib.h>

int str_length (char *str);

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: the first string to concatenates
 * @s2: the second string to concatenates
 *
 * Return:
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string = NULL;
	int i, j;
	int length_s1 = str_length(s1);
	int length_s2 = str_length(s2);
	int length_str = length_s1 + length_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new_string = malloc(sizeof(char) * (length_str + 1));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		new_string[i] = s1[i];

	for (j = 0; j < length_s2; j++)
    	new_string[length_s1 + j] = s2[j];

	new_string[length_str] = '\0';

	return(new_string);
}

/**
 * str_length - function that concatenates two strings.
 *
 * @str: a string.
 *
 * Return: the lenght of the string.
 */

int str_length(char *str)
{
	int length = 0;

	if (str == NULL)
		return (0);

	while (str[length] != '\0')
	{
		length++;
	}
	return(length);
}
