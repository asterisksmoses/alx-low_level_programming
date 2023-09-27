#include "main.h"

int check_paln(char *s, int x, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Function that checks if a string is palindrome or not
 * @s: Input string value
 * Return: 1 incase of a palindrome and 0 if no case
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_paln(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Finds the length of a string
 * @s: Input value
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_paln - Recursively checks the characters for any instance
 * of palindrome
 * @s: Input string value
 * @x: The iterator
 * @length: The length of the string
 * Return: 1 for instance of palindrome, 0 if none
 */

int check_paln(char *s, int x, int length)
{
	if (*(s + x) != *(s + length - 1))
		return (0);
	if (x >= length)
		return (1);
	return (check_paln(s, x + 1, length - 1));
}
