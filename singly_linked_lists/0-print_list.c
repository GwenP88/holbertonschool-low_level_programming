#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: first elements of the list
 * Return: the number of nodes
 */

/* fonction qui prend en paramètre un pointeur const vers le head h d'une liste. */
/* renvoie un size_t représentant le nb de noeud*/
size_t print_list(const list_t *h)
{
	size_t n = 0; /* Init du compteur de noeud*/
	const list_t *current; /* décl d'un pointeur élement courant*/

	if (h == NULL)
		return (0);
	/*Teste si la tête de liste est NULL → la liste est vide. Renvoi 0 noeud*/

	current = h;
	/*Initialise current avec la tête de liste*/

	while (current != NULL)
	/*Boucle tant que le pointeur current pointe vers un nœud valide*/
	{
		if (current->str != NULL)
		/*Vérifie si la chaîne stockée dans le nœud courant (str) est non NULL.*/
		{
			printf("[%u] ", current->len);
			/*Affiche la longueur de la chaîne du nœud courant entre crochets, suivie d’un espace*/
			printf("%s\n", current->str);
			/*Affiche la chaîne elle-même, suivie d’un retour à la ligne*/
		} else
			printf("[0] (nil)\n");
			/*Affiche le format imposé par l’énoncé pour les nœuds dont la chaîne est NULL.*/
		n++;
		/*Incrémente le compteur de nœuds à chaque itération*/
		current = current->next;
		/*Fait avancer le pointeur de parcours vers le nœud suivant dans la liste*/
	}
	return (n);
	/*Renvoie le nombre total de nœuds*/
}
