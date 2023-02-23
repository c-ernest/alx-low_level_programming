#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0-9 except for 2 and 4
 *
 * Return: Result of 0-9
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		_putchar('\n')
	}
}
