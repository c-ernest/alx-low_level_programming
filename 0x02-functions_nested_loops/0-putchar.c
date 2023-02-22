#include "main.h"

/**
 * main - print out _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		put(word[i]);
	put('\n');
	return (0);
}
