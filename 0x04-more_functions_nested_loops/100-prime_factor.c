#include <stdio.h>

/**
 * main - find and print the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int n;

	n = 612852475143;

	long int div = 2, ans = 0, maxFac;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFac = n;
			n = n /div;
			if (n == 1)
			{
				printf("%d", maxFac);
				ans = 1;
				break;
			}
		}
	}
	printf('\n');
	return (0);
}
