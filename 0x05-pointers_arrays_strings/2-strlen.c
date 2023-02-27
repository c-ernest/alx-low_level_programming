#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: String input
 *
 * Return: Length of @str
 */

len _strlen(const char *str)
{
	len length = 0;
	
	while (*str++)
	{
		length++;
	}
	return (length);
}
