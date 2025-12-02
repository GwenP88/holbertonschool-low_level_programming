#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a DLlist
 * @head: first elements of the list
 * @n: element add (here, numbers)
 * Return: the number of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	/* Vérification du pointeur vers la tête de liste */
	if (head == NULL)
		return (NULL);

	/* Allocation du nouveau nœud */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Initialisation du nouveau nœud */
	new->n = n;
	new->next = NULL;

	/* Cas où la liste est vide */
	if (*head == NULL)
	{
		new->prev = NULL; /* Aucun précédent */
		*head = new; /* Le nouveau devient la tête */
		return (new); /* Retour du pointeur vers le nouveau nœud directement */
	}

	/* Parcours jusqu'au dernier nœud */
	while (current->next != NULL)
		current = current->next;

	/* Chaînage du nouveau nœud en fin de liste */
	current->next = new;
	new->prev = current;

	/* Retour du pointeur vers le nouveau nœud */
	return (new);
}
