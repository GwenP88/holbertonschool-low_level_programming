#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index of a DLlist
 * @head: first elements of the list
 * @index: the index of the list where the new node should be deleted
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dl_node = *head;
	dlistint_t *prev_node, *next_node;
	unsigned int i = 0;

	/* Cas d’erreur : pointeur invalide ou liste vide */
	if (head == NULL || *head == NULL)
		return (-1);

	/* Cas particulier : suppression de la tête (index 0) */
	if (index == 0)
	{
		next_node = dl_node->next; /* futur début de liste (ou NULL) */
		if (next_node)
		{
			next_node->prev = NULL; /* plus de précédent pour la nouvelle tête */
			*head = next_node;  /* mise à jour de la tête */
		}
		else
			*head = NULL; /* la liste devient vide */
		free(dl_node); /* libère l’ancienne tête */
		return (1);
	}
	while (dl_node != NULL) /* Parcours de la liste jusqu’au nœud d’index "index" */
	{
		if (i == index)
		{
			/* dl_node est le nœud à supprimer */
			prev_node = dl_node->prev; /* nœud précédent */
			next_node = dl_node->next; /* nœud suivant */
			if (next_node == NULL)
				prev_node->next = NULL; /* suppression du dernier nœud */
			else
			{
				prev_node->next = next_node; /* saute dl_node vers l’avant */
				next_node->prev = prev_node; /* saute dl_node vers l’arrière */
			}
			free(dl_node); /* libère le nœud ciblé */
			return (1);
		}
		dl_node = dl_node->next; /* avance dans la liste */
		i++; /* incrémente l’index courant */
	}
	/* Index hors de la liste : suppression impossible */
	return (-1);
}
