#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list.
 * @head: first element onf list.
 * @str: the new element to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;  /* pointeur vers le nouveau nœud à créer */
	list_t *current = *head;  /* pointeur de parcours initialisé sur la tête de liste */
	int i = 0; /* compteur pour calculer la longueur de str */

	new = malloc(sizeof(list_t)); /* allocation mémoire pour un nouveau nœud */

	if (new == NULL) /* vérifie si l'allocation a échoué */
		return (NULL); /* en cas d'échec, on retourne NULL */

	new->str = strdup(str); /* duplique la chaîne str et stocke l'adresse dans le champ str du nœud */

	while (str[i] != '\0') /* boucle pour compter le nombre de caractères de str jusqu'au caractère nul */
	{
		i++; /* incrémente le compteur pour chaque caractère */
	}
	new->len = i; /* enregistre la longueur calculée dans le champ len du nœud */
	new->next = NULL; /* le nouveau nœud est pour l’instant le dernier, donc next = NULL */

	if (*head == NULL) /* si la liste est vide (aucun premier nœud) */
	{
		*head = new; /* le nouveau nœud devient le premier élément de la liste */
		return (new); /* on retourne l’adresse de ce nouveau nœud */
	}

	while (current->next != NULL) /* tant qu’on n’est pas sur le dernier nœud (celui dont next != NULL) */
	{
		current = current->next; /* avance le pointeur current vers le nœud suivant */
	}
	current->next = new;  /* le dernier nœud pointe maintenant vers le nouveau nœud (insertion en fin) */
	return (new); /* retourne l’adresse du nouveau nœud inséré */
}
