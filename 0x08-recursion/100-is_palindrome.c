#include "main.h"

int check_paln(char *s, int x, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that checks if a string is palindrome or not
 * @s: input value
 * Return: 1 if a string is palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_paln(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: The input string value
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_paln - Recursively checks the characters for palindrome
 * @s: The string in check
 * @x: The iterator
 * @length: The length of the string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int check_paln(char *s, int x, int length)
{
	if (*(s + x) != *(s + length - 1))
	{
		return (0);
	}
	if (x >= length)
	{
		return (1);
	}
	return (check_paln(s, x + 1, length - 1));
}
