#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * If the length is odd, prints from middle + 1.
 * @str: The input string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int cIndex, mIndex, lengthn;

	lengthn = 0;

	for (cIndex = 0; str[cIndex] != '\0'; cIndex++)
		lengthn++;

	mIndex = lengthn / 2;

	if ((lengthn % 2) == 1)
		mIndex = (lengthn + 1) / 2;

	for (cIndex = mIndex; str[cIndex] != '\0'; cIndex++)
		_putchar(str[cIndex]);
	_putchar('\n');
}
