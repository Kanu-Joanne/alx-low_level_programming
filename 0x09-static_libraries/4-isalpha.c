#include "main.h"

/**
 * _isalpha - a function that checks for alphabets
 * @c: char value
 * Return: 1 if c is a letter, else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
