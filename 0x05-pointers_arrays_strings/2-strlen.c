#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int lengthn = 0;

	while (*s != '\0')
	{
		lengthn++;
		s++;
	}

	return (lengthn);
}
