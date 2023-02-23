#include "main.h"

/**
 * more_numbers - Function to print 10 times the numbers, from 0 to 14
 *
 * Return: Result of more_numbers
 */
void more_numbers(void)
{
	int num, i;

	i = 0;

	while (i < 10)
	{
		for (num = 1; num <= 14; num++)
		{
			_putchar(num);
		}

		i++;

		_putchar('\n');
	}
}
