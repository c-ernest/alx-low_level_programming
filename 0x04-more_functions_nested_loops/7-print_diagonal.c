#include "main.h"

/**
 * print_diagonal - Draw a diagonal line using \
 * @n: number of \ to be printed
 */
void print_diagonal(int n)
{
	int blash, space;

	if (n > 0)
	{
		for (blash = 0; blash < n; blash++)
		{
			for (space = 0; space < blash; spaace++)
			{
				_putchar(' ');
			}
			_purchar('\\');

			if (blash == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
