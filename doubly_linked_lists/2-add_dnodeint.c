#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a DLlist
 * @head: first elements of the list
 * @n: element add (here, numbers)
 * Return: the number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/*verifier si head non nul*/
	if (head == NULL)
		return (NULL);

	/*alloué de la mémoire pour new*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n; /* valeur stockée dans le nœud */
	new->prev = NULL; /* en tête de liste, il n’y a pas de précédent */
	new->next = *head; /* le suivant devient l’ancien premier nœud */

	if (*head != NULL) /* si la liste n’était pas vide, mettre à jour le prev de l’ancien head */
	{
		(*head)->prev = new;
	}
	*head = new; /* la tête de liste pointe maintenant vers le nouveau nœud */
	return (new);
}
