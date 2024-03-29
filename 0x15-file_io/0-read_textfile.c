#include "main.h"

/**
 * read_textfile - Read a text file and print it
 * @filename: The name of the file to read
 * @letters: The number of letters to be read and printed
 *
 * Return: Return 0 or the actual number to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t b_read;
	ssize_t b_written;
	int fd;

	if (!(filename && letters))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	b_read = read(fd, buffer, letters);
	close(fd);

	if (b_read < 0)
	{
		free(buffer);
		return (0);
	}
	if (!b_read)
		b_read = letters;

	b_written = write(STDOUT_FILENO, buffer, b_read);
	free(buffer);

	if (b_written < 0)
		return (0);

	return (b_written);
}
