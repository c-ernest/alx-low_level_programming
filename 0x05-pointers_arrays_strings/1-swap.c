#include "main.h"

/**
 * swap_int - Swaps values of two values function
 * @a: First integer
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
