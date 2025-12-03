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
	int new_file;
	size_t char_to_write = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (new_file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}

	while (text_content[char_to_write] != '\0')
	{
		char_to_write++;
	}

	bytes_written = write(new_file, text_content, char_to_write);
		if (bytes_written != char_to_write)
		{
			close(new_file);
			return (-1);
		}

	close(new_file);
	return (1);
}
