#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: integer variable size
 * @c: character variable c
 *
 * Return: pointer, failure return nothing
 */
char *create_array(unsigned int size, char c)
{
	char *newstr;
	unsigned int x;

	newstr = malloc(sizeof(char) * size);
	if (size == 0 || newstr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		newstr[x] = c;
	return (newstr);
}
