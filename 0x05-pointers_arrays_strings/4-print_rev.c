#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: string
 * return: nothing
 */
void print_rev(char *s)
{
	int lengthn = 0;
	int o;

	while (*s != '\0')
	{
		lengthn++;
		s++;
	}
	s--;
	for (o = lenghtn; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
