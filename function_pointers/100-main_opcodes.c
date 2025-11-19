#include "3-calc.h"
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


 /*Les codes d'opération doivent être affichés en hexadécimal, en minuscules.
Chaque code d'opération est composé de deux caractères.
Le listing se termine par un saut de ligne.
ok `printf` et `atoi`.
`atoi` pour convertir l'argument en entier.
nombre d'octets est incorrect, affichez « Erreur »,
suivi d'un saut de ligne, et quittez avec le code de retour 1.
nombre d'octets est négatif, affichez « Erreur »,
suivi d'un saut de ligne, et quittez avec le code de retour 2.
 */

 /* recupérer l'adresse de la fonction main */
/* stocker l'adresse dans un pointeur vers octet */
/* parcourir tous les octets jusqu'a size-1 */
/* parcourr=ir la boucle à partir du pointeur sur main */
/* afficher en hexa sur 2 carcatère, lowercase */
/* un espace entre chaque code, sauf le dernier */

int main(int argc, char *argv[])
{


	int i;
	int nb_bytes;
	char *ptr_main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nb_bytes = atoi(argv[1]);
	if (argv[1] < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr_main = (char *)main;
	for (i = 0; i < nb_bytes; i++)
	{
		printf("%02x ", i);
	}
	printf("\n");

	return (0);
}
