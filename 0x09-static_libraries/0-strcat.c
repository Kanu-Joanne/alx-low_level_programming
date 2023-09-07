#include "main.h"
/**
 * _strcat - a function that joins two strings
 * @dest: variable for input
 * @src: variable for input
 *
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[y] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
