#include "main.h"

/**
 * is_palindrome - checks whether a string is palindrome or not
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - retruns the length of a string
 * @s:the string to be used
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters recursively for palindrome
 * @s: string to be checked
 * @x: iterator
 * @len: length of the string
 *
 * Return: 1 where palindrome, 0 if otherwise
 */

int check_pal(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1)
			return (0);
	if (x >= len)
	return (1);
	return (check_pal(s, x + 1, len - 1));
}
