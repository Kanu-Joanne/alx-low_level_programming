#include "main.h"
/**
 * _strspn - a function that calculateds the length of s
 * @s: char value
 * @accept: char value
 * Return: 0 if Successful
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;

	x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
