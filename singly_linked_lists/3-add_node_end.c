#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list.
 * @head: first element onf list.
 * @str: the new element to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;
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
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
