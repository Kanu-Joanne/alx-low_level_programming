#include <stdlib.h>
#include "main.h"

/**
 * *_memset - a function to fill memory with a constant byte
 * @s: character value
 * @b: character value
 * @n: integer for number of times to copy b
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointr = malloc(size * nmemb);

	if (pointr == NULL)
		return (NULL);

	_memset(pointr, 0, nmemb * size);

	return (pointr);
}
