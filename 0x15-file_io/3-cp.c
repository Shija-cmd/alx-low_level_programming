#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 1024

/**
 * _close - Close a file descriptor and print an error message upon failure
 * @f: the file descriptor to close
 *
 * Return: 0 upon success, -1 upon failure
 */
int _close(int f)
{
	if (!close(f))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	return (-1);

}

/**
 * _read - Read from a file and print an error message upon failure
 * @filename: The name of the file to read from
 * @f: The file descriptor to read from
 * @buf: The buffer to write to
 * @count: The number of bytes to read
 *
 * Return: The number of bytes read, or -1 upon failure
 */
ssize_t _read(const char *filename, int f, char *buf, size_t count)
{
	ssize_t bytes_read = read(f, buf, count);

	if (bytes_read > -1)
		return (bytes_read);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (-1);
}

/**
 * _write - Write to a file and print an error message upon failure
 * @filename: The name of the file to write to
 * @f: The file descriptor to write to
 * @buf: The buffer to read from
 * @count: The number of bytes to write
 *
 * Return: The number of bytes written, or -1 upon failure
 */
ssize_t _write(const char *filename, int f, const char *buf, size_t count)
{
	ssize_t bytes_written = write(f, buf, count);

	if (bytes_written > -1)
		return (bytes_written);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (-1);
}

/**
 * main - Copy a file's contents to another file
 * @argc: The argument count
 * @argv: The argument values
 *
 * Return: Always 1
 */
int main(int argc, const char *argv[])
{
	int f_in, f_out;
	ssize_t bytes_read;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_in = open(argv[1], O_RDONLY);
	if (f_in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(f_in);
		exit(99);
	}
	while ((bytes_read = _read(argv[1], f_in, buffer, BUFSIZE)))
	{
		if (bytes_read < 0)
		{
			_close(f_in);
			_close(f_out);
			exit(98);
		}
		if (_write(argv[2], f_out, buffer, bytes_read) < 0)
		{
			_close(f_in);
			_close(f_out);
			exit(99);
		}
	}
	if ((_close(f_in) | _close(f_out)) < 0)
		exit(100);
	return (0);
}
