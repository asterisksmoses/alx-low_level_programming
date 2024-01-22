#include <stdio.h>

/**
 * main - Function that prints the name of the file it was
 * compiled from
 * Return: 0 upon success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
