#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a DLlist
 * @head: first elements of the list
 * Return: the sum of all data or 0 if list is null
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head; /* pointeur de parcours */
	unsigned int sum = 0; /* accumulateur de la somme */

	/* Parcours de la liste du début à la fin */
	while (current != NULL)
	{
		sum += current->n;  /* ajoute la valeur du nœud courant */
		current = current->next; /* passe au nœud suivant */
	}
	return (sum); /* renvoie la somme totale */
}
