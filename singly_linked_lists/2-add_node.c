#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the first elements of the list
 * @str: the new element to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[i] != '\0')
	{
		i++;
	}
	new->len = i;

	new->next = *head;
	*head = new;

	return (new);
	free(new);
}
