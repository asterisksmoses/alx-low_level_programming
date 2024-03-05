#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Function that appends text at the end
 * of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to be added at the end
 * of the file
 * Return: 1 upon success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	size_t length;
	ssize_t result;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);
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
