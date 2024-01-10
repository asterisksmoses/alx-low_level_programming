#include "main.h"

int find_paln(char *s, int x, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Function that checks for palindrome
 * @s: The string to be checked
 * Return: Nothing
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (find_paln(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to be used
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * find_paln - Uses recursion to check for palindrome
 * @s: The string to be used
 * @x: The iterator
 * @len: The length of the string
 * Return: 1 incase of palindrome 0 if no case
 */

int find_paln(char *s, int x, int len)
{
	if (*(s + x) != *(s + len))
		return (0);
	if (x >= len)
		return (1);
	return (find_paln(s, x + 1, len - 1));
}
