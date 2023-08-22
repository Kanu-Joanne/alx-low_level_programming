#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The input string.
 *
 * Return: None.
 */
void puts2(char *str)
{
	int strLength = 0;
	int lIndex = 0;
	char *currentChar = str;
	int currentIndex;

	while (*currentChar != '\0')
	{
		currentChar++;
		strLength++;
	}

	lIndex = strLength - 1;

	for (currentIndex = 0; currentIndex <= lIndex; currentIndex++)
	{
		if (currentIndex % 2 == 0)
		{
			_putchar(str[currentIndex]);
		}
	}

	_putchar('\n');
}
