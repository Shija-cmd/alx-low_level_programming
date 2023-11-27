#include "main.h"

/**
 * _strlen - Compute the length of a NULL-terminated string
 * @str: The string to measure
 *
 * Return: The length of str, or -1 if str is NULL
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return (len);
}

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: The name of the file to append to
 * @text_content: The data to append to filename
 *
 * Return: On success, return 1. Otherwise, return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
		b_written = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (b_written < 0)
		return (-1);
	return (1);
}
