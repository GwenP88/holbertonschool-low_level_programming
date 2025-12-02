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

	new = malloc(sizeof(list_t)); /* allocation du nouveau nœud */

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);  /* duplication de la chaîne passée en paramètre */

	/* Calcul de la longueur de la chaîne str, sans strlen */
	while (str[i] != '\0')
	{
		i++;
	}
	new->len = i; /* stockage de la longueur dans le champ len */

	new->next = *head;  /* le nouveau nœud pointe vers l’ancienne tête */
	*head = new; /* la tête de liste devient le nouveau nœud */

	return (new); /* renvoie l’adresse du nouveau nœud */
}
