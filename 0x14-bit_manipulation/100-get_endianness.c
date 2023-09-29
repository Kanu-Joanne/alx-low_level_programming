#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big, otherwise 1
 */
int get_endianness(void)
{
	int a;

	x = 1;

	char *y;

	y = (char *)&x;

	return (*y);
}
