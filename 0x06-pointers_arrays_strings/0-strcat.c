#include "main.h"

/**
 * strcat - concatenates strings pointed to by @src and @dest
 * @dest - pointer to the string to concatenate
 * @src - source string to append
 *
 * Return: pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, d_len = 0;

	while (dest[index++])
	{
		d_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[d_len++] = src[index];
	}
	return (dest);
}
