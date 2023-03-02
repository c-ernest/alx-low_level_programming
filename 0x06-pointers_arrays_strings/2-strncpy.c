#include "main.h"

/**
 * _strncpy - copies an inputted number of bytes from string src into dest.
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: number of bytes to be copied.
 *
 * Return: pointer to the resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, s_len = 0;

	while (src[index++])
	{
		s_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = s_len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return(dest);
}
