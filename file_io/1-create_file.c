#include "main.h"

/**
 * create_file - function that creates a file and write on it.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success
 * -1 if filename is NULL
 * -1 if file can not be created,
 * -1 if file can not be written
 * -1 if write fails ...
 */

int create_file(const char *filename, char *text_content)
{
	int new_file; /* descripteur de fichier retourné par open */
	ssize_t char_to_write = 0; /* nombre de caractères à écrire dans le fichier */
	ssize_t bytes_written; /* nombre de caractères effectivement écrits */

	/* Vérifie que le nom de fichier est valide */
	if (filename == NULL)
		return (-1);

	/* Ouvre le fichier en écriture, le crée si besoin, le tronque s'il existe déjà
	 * Permissions à la création : rw------- (0600)
	 */
	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* Si l'ouverture échoue, on renvoie une erreur */
	if (new_file == -1)
		return (-1);

	/* Si le contenu est NULL, on crée juste un fichier vide (ou le tronque) */
	if (text_content == NULL)
	{
		close(new_file); /* On ferme le fichier avant de sortir */
		return (1); /* Succès : fichier existant et accessible */
	}

	/* Calcule la longueur de la chaîne text_content (jusqu'au caractère nul) */
	while (text_content[char_to_write] != '\0')
	{
		char_to_write++;
	}

	/* Écrit la chaîne complète dans le fichier */
	bytes_written = write(new_file, text_content, char_to_write);
		if (bytes_written != char_to_write) /* Vérifie que tout ce qui était prévu a bien été écrit */
		{
			close(new_file); /* En cas d'échec d'écriture, on ferme le fichier */
			return (-1); /* Et on signale l'erreur */
		}

	/* Ferme le fichier après écriture réussie */
	close(new_file);
	/* Retourne 1 pour indiquer que tout s'est bien passé */
	return (1);
}
