#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string
 * Return: Reverse string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int a;

	while (s[counter] != '\0')
	counter++;
	for (a = 0; i < counter; i++)
	{
		counter--;
		rev = s[a];
		s[a] = s[counter];
		s[counter] = rev;
	}
}
