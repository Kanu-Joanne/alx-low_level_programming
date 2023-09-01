#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: String
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		lenght += _strlen_recursion(s + 1);
	}

	return (length);
}
