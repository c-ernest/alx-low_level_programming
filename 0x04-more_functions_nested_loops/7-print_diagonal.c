#include "main.h"

/**
 * print_diagonal - Draw a diagonal line using \
 * @n: number of \ to be printed
 */
void print_diagonal(int n)
{
	int blash, space;

	blash = 0;
	while (n > 0)
	{
		space = blash;
		while (blash > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		blash++;
		space--;
	}
	if (blash < 1)
	{
		_putchar('\n');
	}
}
