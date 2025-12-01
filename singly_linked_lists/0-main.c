#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
	/* chaine hello, taille 5, pointeur sur le suivant null car fin de liste */
    size_t n;

    head = &hello; /*initialisation de la liste chainée avec 1 noeud */
	/* head → [ "World" | 5 | NULL ] */

    new = malloc(sizeof(list_t)); /*alloc dynamique pour ajout d'un nouveau noeud */
	/* new → [ ??? | ??? | ??? ] */

    if (new == NULL) /* test verif alloc OK */
    {
        printf("Error\n");
        return (1);
    }

    new->str = strdup("Hello"); /* new ->str accede au champs str du noeud pointé par new */
	/* new -> str = (*new).str */
	/* strdup : fonction qui duplique une chaine de caractère */
	/* new -> reçoit l'adresse de cette copie */

    new->len = 5; /* taille de la chaine dupliquée */
	/* new -> [ "Hello" | 5 | ??? ] */

    new->next = head; /* accéde au pointeur vers le prochain noeud */
	/* fait pointer new vers hello */
	/* avant : head → [ "World" | 5 | NULL ] */
	/* avant : new  → [ "Hello" | 5 | ??? ] */
	/* aprés : new  → [ "Hello" | 5 |  &hello ] */
	/* aprés : head → [ "World" | 5 | NULL ] */

    head = new;
	/* liste a ce stade : head -> [ "Hello" | 5 |  &hello ]  →  [ "World" | 5 | NULL */
    n = print_list(head);
    printf("-> %lu elements\n", n);
	/* parcour le liste, affiche les neoud, retourne le nb de noeud */

    printf("\n");
	/* saut de ligne visuel */

    free(new->str); /* libère la memoire alouée par strdup */
	/* aprés free alloc, new->str ne pointe plus sur une zone valide */
	new->str = NULL; /* annule le pointeur */

    n = print_list(head);
    printf("-> %lu elements\n", n);
	/* parcour le liste, affiche les neoud, retourne le nb de noeud */

    free(new);
	/* librere la structure du noeud new */
    return (0);
}
