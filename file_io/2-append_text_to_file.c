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
	int file;
	ssize_t char_to_write = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[char_to_write] != '\0')
	{
		char_to_write++;
	}

	bytes_written = write(file, text_content, char_to_write);
		if (bytes_written != char_to_write)
		{
			close(file);
			return (-1);
		}

	close(file);
	return (1);
}
