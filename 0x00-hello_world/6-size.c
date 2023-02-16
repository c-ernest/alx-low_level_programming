#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of an int: %x byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %x byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %x byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %x byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %x byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
