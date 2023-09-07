#include "main.h"
/**
 * _strlen - a function to return the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
