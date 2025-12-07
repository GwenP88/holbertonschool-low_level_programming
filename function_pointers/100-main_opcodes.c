#include <stdlib.h>
#include <stdio.h>

/**
 * main - programme that that prints
 * the opcodes of its own main function.
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: the opcodes
 */


int main(int argc, char *argv[])
{
	/* compteur pour parcourir les octets à afficher */
	int i;
	/* nombre d'octets de main à afficher */
	int nb_bytes;
	/* vérifie qu'il y a exactement un argument en plus du nom du programme */
	unsigned char *ptr_main;

	if (argc != 2)
	{
		/* affiche un message d'erreur si le nombre d'arguments est incorrect */
		printf("Error\n");
		/* retourne 1 pour signaler une erreur de syntaxe d'appel */
		return (1);
	}

	/* convertit l'argument en entier (nombre d'octets à afficher) */
	nb_bytes = atoi(argv[1]);
	/* refuse un nombre d'octets négatif */
	if (nb_bytes < 0)
	{
		/* message d'erreur si le nombre d'octets demandé est invalide */
		printf("Error\n");
		/* retourne 2 pour signaler une erreur de valeur */
		return (2);
	}

	/* récupère l'adresse de main et la cast en pointeur vers des octets */
	ptr_main = (unsigned char *)main;
	/* boucle sur nb_bytes octets à partir de l'adresse de main */
	for (i = 0; i < nb_bytes; i++)
	{
		/* affiche l'octet courant en hexadécimal sur 2 chiffres */
		printf("%02x", ptr_main[i]);
		/* ajoute un espace entre les octets,
		 * sauf après le dernier
		 */
		if (i < nb_bytes - 1)
		printf(" ");
	}
	/* termine l'affichage par un retour à la ligne */
	printf("\n");
	/* retour 0 : le programme s'est exécuté correctement */
	return (0);
}
