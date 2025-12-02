#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a DLlist
 * @h: first elements of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0; /* compteur d’éléments */

	if (h == NULL) /* liste vide */
		return (0);

	/* Parcours complet de la liste */
	while (h != NULL)
	{
		i++; /* incrémente le compteur */
		h = h->next; /* passe au nœud suivant */
	}
	return (i); /* renvoie le nombre total de nœuds */
}
