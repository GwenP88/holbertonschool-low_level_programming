#include "lists.h"

/**
 * free_dlistint - function that frees a DLlist
 * @head: first elements of the list
 * Return: nothing, void function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp; /* pointeur temporaire pour conserver le suivant */

	if (head == NULL)
		return; /* rien à faire si la liste est déjà vide */

	while (head != NULL) /* Parcours de la liste et libération de chaque nœud */
	{
		tmp = head->next; /* sauvegarde du nœud suivant */
		free(head); /* libère le nœud courant */
		head = tmp; /* passe au nœud suivant */
	}
}
