#include <stdio.h>
#include <math.h>

/**
 * main - find and print the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int getMaxPF (int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n/2; //reduce n by half
	}
	for (i = 3; i <= sqrt(n); i = i+2)
	{
		//odd numbers
		while (n % i == 0)
		{
			max = i;
			n = n/i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	return max;
}
main ()
{
	n = 612852475143
	printf("%d", getMaxPF(n));
}
