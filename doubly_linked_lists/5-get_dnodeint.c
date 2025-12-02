#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a DLlist
 * @head: first elements of the list
 * @index: is the index of the node, starting from 0
 * Return: the number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head; /* nœud courant lors du parcours */
	unsigned int i = 0;  /* compteur d’index */

	/* Parcours de la liste jusqu’à atteindre l’index demandé */
	while (current != NULL)
	{
		if (i == index) /* si l’index courant correspond à index */
			return (current); /* on retourne le nœud courant */
		current = current->next; /* avance au nœud suivant */
		i++; /* incrémente l’index courant */
	}
	/* Si on atteint la fin sans trouver l’index, on renvoie NULL */
	return (NULL);
}
