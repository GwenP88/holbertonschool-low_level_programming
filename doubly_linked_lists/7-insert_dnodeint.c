#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 *  at a given position of a DLlist
 * @h: first elements of the list
 * @idx: the index of the list where the new node should be added
 * @n: element to add (here, number)
 * Return: address of the new node or NULL in case of failure / index impossible
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i = 0;
	dlistint_t *current = *h;

	/* Cas particulier : insertion en tête de liste */
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	/* Si la liste est vide et qu’on veut insérer après l’index 0 : impossible */
	if (*h == NULL && idx > 0)
		return (NULL);

	/* Parcours de la liste pour atteindre l’index précédent (idx - 1) */
	while (current != NULL)
	{
		/* Cas : on est sur le dernier nœud et juste avant l’index demandé */
		if (current->next == NULL && i == idx - 1)
		{
			/* On délègue l’insertion en fin à add_dnodeint_end */
			return (add_dnodeint_end(h, n));
		} else if (i == idx - 1)
		{
			/* Cas : insertion au milieu de la liste */
			new = malloc(sizeof(dlistint_t)); /* allocation du nouveau nœud */
			if (new == NULL)
				return (NULL);
			new->n = n; /* affectation de la valeur */
			new->prev = current;  /* lien vers le précédent (current) */
			tmp = current->next; /* sauvegarde de l’ancien suivant */
			current->next = new; /* current pointe maintenant vers new */
			new->next = tmp; /* new pointe vers l’ancien suivant */
			tmp->prev = new; /* l’ancien suivant pointe maintenant vers new */
			return (new);
		}
		current = current->next;  /* avance au nœud suivant */
		i++;  /* incrémente l’index courant */
	}
	/* Si on sort de la boucle : idx est hors de la liste */
	return (NULL);
}
