#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Generate random valid passwords for the program
 * 101-crackme.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char pwd[84];
	int index = 0, sum = 0, dif_h1, dif_h2;

	srand(time(0));

	while (sum < 2772)
	{
		pwd[index] = 33 + rand() % 94;
		sum += pwd[index++];
	}
	pwd[index] = '\0';

	if (sum != 2772)
	{
		dif_h1 = (sum - 2772) / 2;
		dif_h2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
		{
			dif_h1++;
		}

		for (index = 0; pwd[index]; index++)
		{
			if (pwd[index] >= (33 + dif_h1))
			{
				pwd[index] -= dif_h1;
				break;
			}
		}

		for (index = 0; pwd[index]; index++)
		{
			if (pwd[index] >= (33 + dif_h2))
			{
				pwd[index] -= dif_h2;
				break;
			}
		}
	}

	printf("%s", pwd);

	return (0);
}
