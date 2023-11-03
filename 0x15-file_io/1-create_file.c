#include "main.h"
#include <stdlib.h>

/**
 * create_file - Function that creates a file
 * @filename: The name of the file
 * @text_content: Is a null terminated string to write to the file
 * Return: 1 upon success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fl, res = 1, val = 0;

	if (!filename)
	{
		return (-1);
	}
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fl == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[val])
			val++;
		val = write(fl, text_content, val);
	}
	if (res == -1)
	return (-1);
	close(fl);
	return (1);
}
