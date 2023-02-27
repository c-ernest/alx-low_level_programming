#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String input
 *
 * Return: Length of @str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
