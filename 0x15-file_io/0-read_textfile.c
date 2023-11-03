#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a texte file and prints it
 * to the POSIX standard output
 * @filename: The name of the file
 * @letters: Input value
 * Return: The number of letters it could read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int xy;

	ssize_t _read, _write;

	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	xy = open(filename, O_RDONLY);

	if (xy == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_read = read(xy, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(xy);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(xy);
		return (0);
	}
	close(xy);
	return (_read);
}
