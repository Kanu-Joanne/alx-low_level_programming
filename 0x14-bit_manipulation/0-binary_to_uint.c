#include "main.h"

/**
 * 0-binary_to_uint - a function that converts a binary number to unsigned int
 * @b: string pointer
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int no = 0;
	int x;

	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		no <<= 1;
		if (b[x] == '1')
			no += 1;
	}
	return (no);
}
