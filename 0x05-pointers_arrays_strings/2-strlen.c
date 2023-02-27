#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns the length of a string
 * @s: String input
 *
 * Return: Length of @str
 */

size_t strlen(const char *s)
{
	size_t length = 0;
	
	while (*s++)
	{
		length++;
	}
	return (length);
}
