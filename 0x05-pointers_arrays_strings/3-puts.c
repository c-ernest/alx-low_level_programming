#include "main.h"

/**
 * _puts - Prints a string to stout Function
 * @str: string printed
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
