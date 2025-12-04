#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void close_file(int file);

/**
 * main - check the code
 * @argc: number of arguments passed to the program
 * @argv: array of argument strings (expects file_from and file_to)
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t bytes_written, bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
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
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file);
		exit(100);
	}
}

