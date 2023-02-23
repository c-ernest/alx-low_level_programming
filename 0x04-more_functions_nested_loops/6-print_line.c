#include "main.h"

/**
 * print_line - draw a straight line in the terminal with _
 * @n: The number of _ 
 */
void print_line(int n)
{
	int und;

	if (n > 0)
	{
		for (und = 0; und < n; und++)
			_putchar('_');
	}
	_putchar('\n');
}
