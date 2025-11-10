#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: Number of bytes of s2 to concatenate
 *
 * Return: a pointer to a newly allocated memory space containing s1,
 * followed by the first n bytes of s2 or NULL if it's fail.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string = NULL;
	int length1 = 0;
	int length2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] <= s2[n])
		length2++;

	new_string = malloc((sizeof(s1) * length1) + (sizeof(s2) * (length2 + 1)));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		new_string[i] = s1[i];

	for (j = 0; j < length2; j++)
		new_string[length1 + j] = s2[j];

	new_string[length1 + length2] = '\0';

	return (new_string);
}
