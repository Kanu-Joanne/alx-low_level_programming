#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: character input
 * @s2: character input
 * Return: result of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	cat = malloc(sizeof(char) * (x + y + 1));

	if (cat == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		cat[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		cat[x] = s2[y];
		x++, y++;
	}
	cat[x] = '\0';
	return (cat);
}
