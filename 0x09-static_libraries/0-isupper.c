#include "main.h"
/**
 * _isupper - a function for uppercase letters
 * @c: character
 *
 * Return: other 0 or uppercase 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
