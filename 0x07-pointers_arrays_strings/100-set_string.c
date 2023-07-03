#include "main.h"

/**
 * set_string - functuin that sets the value of a pointer
 * to char
 * @s: value to be used
 * @to: the value to be set
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
