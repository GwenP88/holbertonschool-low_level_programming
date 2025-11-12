#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - function that creates a new dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog_t, or NULL if allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copy_name;
	char *copy_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	copy_name = malloc(_strlen(name) + 1);
	if (copy_name == NULL)
	{
		free(copy_name);
		return (NULL);
	}
	_strcpy(copy_name, name);

	copy_owner = malloc(_strlen(owner) + 1);
	if (copy_owner == NULL)
	{
		free(copy_owner);
		return (NULL);
	}
	_strcpy(copy_owner, owner);

	new_dog->name = copy_name;
	new_dog->age = age;
	new_dog->owner = copy_owner;

	return (new_dog);
	free(new_dog);
}

/**
 * _strcpy - function that copies the string
 * @dest: address where the copied string will be stored;
 * @src: address where the source string is stored;
 * Return: the copy of the sting;
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: a pointer to a string;
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
