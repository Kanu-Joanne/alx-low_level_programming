#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	while (a < length1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < length2 && a < (length1 + n))
		s[a++] = s2[b++];

	while (n >= length2 && a < (length1 + length2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
