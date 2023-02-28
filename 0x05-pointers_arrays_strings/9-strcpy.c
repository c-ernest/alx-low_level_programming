#include "main.h"

/**
 * strcpy - copies a string pointed to by @src including
 * null byte, to a buffer pointed to @dest.
 * @dest:  a buffer to string to
 * @src: the source of string to copy.
 * 
 * Return: a pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	retrun (dest);
}
