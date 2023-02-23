#include <stdio.h>

/**
 * main - find and print the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long prime = 612852475143, dsn;

	while (dsn < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (dsn = 3; dsn < (prime / 2); dsn += 2)
		{
			if ((prime % dsn) == 0)
			{
				prime /= dsn;
			}
		}
	}
	printf("%d\n", prime);
	return (0);
}
