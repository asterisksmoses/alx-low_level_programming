#include <stdio.h>
/**
 * main - program that print various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int d;
	long long int z;
	float f;

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
