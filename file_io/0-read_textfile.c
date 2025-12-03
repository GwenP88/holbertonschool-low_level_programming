#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: a pointer to the file to read and display
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file; /* descripteur de fichier retourné par open */
	ssize_t bytes_read; /* nombre d'octets effectivement lus */
	ssize_t bytes_written; /* nombre d'octets effectivement écrits */
	char *buffer; /* buffer temporaire pour stocker les données lues */

	/* Vérifie que le nom de fichier est valide */
	if (filename == NULL)
		return (0);

	/* Ouvre le fichier en lecture seule */
	file = open(filename, O_RDONLY);
	if (file == -1) /* Échec de l'ouverture du fichier */
		return (0);

	/* Alloue un buffer capable de contenir "letters" caractères */
	buffer = malloc(letters * (sizeof(char)));
		if (buffer == NULL) /* Échec de l'allocation de mémoire */
		{
			close(file); /* On ferme le fichier avant de quitter */
			return (0);
		}

	/* Lit jusqu'à "letters" octets depuis le fichier dans le buffer */
	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)  /* Échec de la lecture */
	{
		free(buffer); /* Libère la mémoire allouée */
		close(file); /* Ferme le fichier avant de quitter*/
		return (0);
	}

	/* Écrit sur la sortie standard exactement le nombre d'octets lus */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written != bytes_read) /* Échec total ou partiel de l'écriture */
		{
			free(buffer); /* Libère le buffer */
			close(file); /* Ferme le fichier avant de quitter*/
			return (0);
		}

	/* Nettoyage : libère la mémoire et ferme le fichier */
	free(buffer);
	close(file);
	/* Retourne le nombre d'octets effectivement écrits sur stdout */
	return (bytes_written);
}
