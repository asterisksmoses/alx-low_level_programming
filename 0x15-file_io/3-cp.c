#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Function that exits when an error is encountered
 * @code: Input value
 * @xyz: Input value
 * @x: Input Value
 */

void error_exit(int code, const char *xyz, int x)
{
	dprintf(STDERR_FILENO, "%s%d\n", xyz, x);
	exit(code);
}

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: The argument vector
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int x_fr, x_to;
	char *file_fr, *file_t;
	ssize_t result, value;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_fr = argv[1];
	file_t = argv[2];

	x_fr = open(file_fr, O_RDONLY);
	if (x_fr == -1)
		error_exit(99, "Error: Can't write from file ", x_fr);

	x_to = open(file_t, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (x_to == -1)
		error_exit(99, "Error: Can't write to ", x_to);

	while ((result = read(x_fr, buffer, BUFFER_SIZE)) > 0)
	{
		value = write(x_to, buffer, result);
		if (value == -1)
			error_exit(99, "Error: Can't write to ", x_to);
		if (value != result)
			error_exit(99, "Error: Incomplete write to ", x_to);
	}
	if (result == -1)
		error_exit(98, "Error: Can't read from file ", x_fr);
	if (close(x_fr) == -1)
		error_exit(100, "Error: Can't close x ", x_fr);
	if (close(x_to) == -1)
		error_exit(100, "Error: Can't close x ", x_to);

	return (0);
}
