#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a DLlist.
 * @h: first elements of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;  /* compteur de nœuds affichés */
	const dlistint_t *current; /* pointeur de parcours */

	if (h == NULL) /* si la liste est vide, rien à afficher */
		return (0);

	current = h; /* on commence au début de la liste */
	/* Parcours complet de la liste */
	while (current != NULL)
	{
		printf("%d\n", current->n); /* affiche la valeur du nœud courant */
		i++; /* incrémente le nombre de nœuds vus */
		current = current->next; /* passe au nœud suivant */
	}
	/* renvoie le nombre total de nœuds affichés */
	return (i);
}
