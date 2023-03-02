#include "main.h"

/**
 * _strncat - concatenate two strings using at most an inputted
 * number of bytes from src
 * @dest: string to be appended
 * @src: string to be appended to dest
 * @n: number of bytes from src to be appended to dest
 *
 * Return: pointer to the output string to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index  = 0, d_len = 0;

	while (dest[index++])
	{
		d_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[d_len++] = src[index];
	}
	return(dest);
}
