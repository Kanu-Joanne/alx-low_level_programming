#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *pointr;
	int x;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointr = malloc(sizeof(int) * size);

	if (pointr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pointr[x] = min++;

	return (pointr);
}
