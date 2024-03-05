#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Function that reads a texte file and prints it
 * to the POSIX standard output
 * @filename: Input value
 * @letters: Input Value
 * Return: 0 upon success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	char *str;
	ssize_t result, value;

	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	str = malloc(sizeof(char) * (letters + 1));
	if (str == NULL)
	{
		close(x);
		return (0);
	}
	result = read(x, str, letters);
	if (result == -1)
	{
		close(x);
		free(str);
		return (0);
	}
	str[result] = '\0';
	value = write(STDOUT_FILENO, str, result);
	if (value == -1 || value != result)
	{
		close(x);
		free(str);
		return (0);
	}
	close(x);
	free(str);

	return(result);
}
