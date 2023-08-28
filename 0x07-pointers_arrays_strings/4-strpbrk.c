#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @accept: input
 * Return: Pointer to the first occurrence of any character from 'accept' in 's', or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}

	return ('\0');
}
