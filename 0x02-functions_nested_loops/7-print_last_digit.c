#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 * @ld: last digit of number
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
	int rld;
	
	rld = (ld % 10);

	if (rld < 0)
	{
		rld = (-1 * rld);
	}
	_putchar(rld + '0');
	return (rld);
}
