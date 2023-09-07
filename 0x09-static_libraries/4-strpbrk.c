#include "main.h"
/**
 * _strpbrk - a function to search for character match in string
 * @s: char value
 * @accept: char value
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
		if (*s == accept[x])
		return (s);
		}
	s++;
	}

return ('\0');
}
