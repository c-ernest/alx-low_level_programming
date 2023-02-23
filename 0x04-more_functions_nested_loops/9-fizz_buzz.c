#include <stdio.h>

/**
 * main - print the numbers fron 1-100, for multiples of 3, print Fizz
 * 	  for multiples of 5, print Buzz, and for multiples of 3 and 5
 * 	  print FizzBuzz
 * 
 * Return: Result
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}
		if (num == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
