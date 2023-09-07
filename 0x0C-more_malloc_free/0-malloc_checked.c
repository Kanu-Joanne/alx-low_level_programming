#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: integer value representing number of bytes
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointr;

	pointr = malloc(b);

	if (pointr == NULL)
		exit(98);

	return (pointr);
}
