#include "main.h"

/**
 * append_text_to_file - function that appends text
 * at the end of a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string
 * to write at the end of the file
 * Return: 1 on success
 * -1 if filename is NULL
 * -1 if the file does not exist
 * -1 if you do not have the required permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file; /* descripteur de fichier pour filename */
	ssize_t char_to_write = 0; /* nombre de caractères à ajouter à la fin du fichier */
	ssize_t bytes_written; /* nombre de caractères effectivement écrits */

	/* Vérifie que le nom de fichier est valide */
	if (filename == NULL)
		return (-1);

	/* Ouvre le fichier en écriture, en mode ajout (sans création si inexistant) */
	file = open(filename, O_WRONLY | O_APPEND);

	/* Si le fichier n'existe pas ou n'est pas accessible en écriture, erreur */
	if (file == -1)
		return (-1);

	/* Si le texte à ajouter est NULL, ne rien écrire mais considérer comme succès
	 * (puisque le fichier existe et est accessible)
	 */
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	/* Calcule la longueur de text_content jusqu'au caractère nul de fin de chaîne */
	while (text_content[char_to_write] != '\0')
	{
		char_to_write++;
	}

	/* Écrit le contenu à la fin du fichier */
	bytes_written = write(file, text_content, char_to_write);
		/* Vérifie que tout ce qui était prévu a bien été écrit */
		if (bytes_written != char_to_write)
		{
			close(file); /* En cas d'erreur d'écriture, on ferme le fichier */
			return (-1); /* et on signale l'échec */
		}

	/* Ferme le fichier après écriture réussie */
	close(file);
	/* Retourne 1 pour indiquer le succès */
	return (1);
}
