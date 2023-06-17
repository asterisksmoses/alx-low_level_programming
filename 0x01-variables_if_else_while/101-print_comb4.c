#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combinations of three digits
 * Return: each time 0
 */

int main(void)
{
	int x, y, l;
	
	for (x = 15; x < 25; x++)
	{
		for (y = 16; y < 25; y++)
		{
			for (l = 17; l < 25; l++)
			{
				if (l > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(l);
					if (x != 22 || y != 23)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
