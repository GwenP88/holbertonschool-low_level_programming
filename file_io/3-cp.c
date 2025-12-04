#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void close_file(int file);
void error_handling(const char *message, int error_code, const char *arg);

/**
 * main - copies the content of one file into another
 * @argc: number of arguments passed to the program
 * @argv: array of argument strings (expects file_from and file_to)
 * Return: 0 on success,
 * or the process exits with 97, 98, 99 or 100 on error.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t bytes_written, bytes_read;


	/* Vérifie que le nombre d’arguments est correct (nom du programme + 2 fichiers) */
	if (argc != 3)
	{
		error_handling("Usage: cp file_from file_to\n", 97, NULL);
	}

	/* Ouvre le fichier source en lecture seule */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error_handling("Error: Can't read from file %s\n", 98, argv[1]);
	}

	/* Ouvre/crée le fichier destination en écriture, en le tronquant si besoin
	 * Permissions à la création : rw-rw-r-- (0664)
	 */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		error_handling("Error: Can't write to %s\n", 99, argv[2]);
	}

	/* Boucle de copie : lit le fichier source par blocs de 1024 octets
	 * et écrit chaque bloc dans le fichier destination
	 */
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		/* Écrit dans le fichier destination le nombre exact d’octets lus */
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close_file(file_from);
			close_file(file_to);
			error_handling("Error: Can't write to %s\n", 99, argv[2]);
		}
	}

	/* Si la dernière lecture a échoué (bytes_read == -1), gestion d’erreur spécifique */
	if (bytes_read == -1)
	{
		close_file(file_from);
		close_file(file_to);
		error_handling("Error: Can't read from file %s\n", 98, argv[1]);
	}

	/* Fermeture normale des fichiers en fin de traitement (chemin de succès) */
	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * close_file - closes a file descriptor and handles errors
 * @file: file descriptor to be closed
 *
 * Return: This function does not return on failure.
 */

void close_file(int file)
{
	/* Tente de fermer le descripteur de fichier */
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * error_handling - prints an error message and exits with a given status code
 * @message: format string for the error message
 * @error_code: exit status code to terminate the program
 * @arg: optional string argument to be formatted into the message (may be NULL)
 *
 * Return: This function does not return on failure.
 */

void error_handling(const char *message, int error_code, const char *arg)
{
	if (arg == NULL)
		dprintf(STDERR_FILENO, "%s", message);
	else
		dprintf(STDERR_FILENO, message, arg);
	exit(error_code);
}
