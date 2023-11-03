#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Function that apppends text at the end
 * of a file
 * @filename: The name of the file
 * @text_content: is the NULL terminated string to add at
 * the end of the file
 * Return: 1 upon success and -1 upon faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int xy, _write;

	if (!filename)
		return (-1);

	xy = open(filename, O_WRONLY | O_APPEND);
	if (xy == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(xy);
		return (1);
	}

	_write = write(xy, text_content, strlen(text_content));
	if (_write == -1 || _write != (int)strlen(text_content))
	{
		close(xy);
		return (-1);
	}

	close(xy);
	return (1);
}
