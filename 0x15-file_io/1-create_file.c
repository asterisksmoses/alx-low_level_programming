#include "main.h"
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * create_file - Function that creates a file
 * @filename: The name of the file
 * @text_content: Input value
 * Return: 1 upon success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int x;
	size_t length;
	ssize_t result;

	if (filename == NULL)
		return (1);
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR);
	if (x == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = strlen(text_content);
		result = write(x, text_content, length);
		if (result != (ssize_t)length)
		{
			close(x);
			return (-1);
		}
	}
	close(x);
	return (1);
}
