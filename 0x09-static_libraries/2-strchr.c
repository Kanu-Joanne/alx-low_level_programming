#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that searches for the first
 * occurence of the char c in s
 * @s: char variable
 * @c: char variable
 *
 * Return: if Successful, 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
