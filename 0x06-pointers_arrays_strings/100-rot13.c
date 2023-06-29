#include "main.h"
#include <stdio.h>

/**
 * *rot13 - function that encodes rot13
 * @s: input to be used
 * Return: 0
 */

char *rot13(char *s)
{
	int x;
	int y;

	char data1[] =
"ABCDEFGHIJKLMNOPQRTSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == data1[y])
			{
				s[x] = datarot[y];
				break;
			}
		}
	}
	return (0);
}
