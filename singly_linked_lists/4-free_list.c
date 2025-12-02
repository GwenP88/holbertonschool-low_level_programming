#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the first element of the list
 * Return: nothing, void function
 */

void free_list(list_t *head)
{
	list_t *tmp;  /* pointeur temporaire pour stocker le nœud suivant */

	if (head == NULL)  /* si la liste est vide, il n’y a rien à libérer */
		return; /* on quitte simplement la fonction */

	while (head != NULL) /* tant qu’il reste au moins un nœud à libérer */
	{
		tmp = head->next; /* on sauvegarde l’adresse du nœud suivant */
		free(head->str); /* on libère la chaîne de caractères du nœud courant */
		free(head); /* puis on libère le nœud lui-même */
		head = tmp; /* on avance : head pointe maintenant sur le prochain nœud */
	}
}
