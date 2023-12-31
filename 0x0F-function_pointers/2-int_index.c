#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array with type int
 * @size: number of elements
 * @cmp: pointer to function
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
