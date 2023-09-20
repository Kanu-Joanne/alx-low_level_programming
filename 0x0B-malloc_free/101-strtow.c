#include <stdlib.h>
#include "main.h"

/**
 * count_word - a function to help count the string
 * @s: string to be checked
 *
 * Return: now
 */
int count_word(char *s)
{
	int f, x, now;

	f = 0;
	now = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			now++;
		}
	}

	return (now);
}
/**
 * **strtow - a function that divides a string into words
 * @str: string to be divided
 *
 * Return: pointer (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, length = 0, wrds, c = 0, start, end;

	while (*(str + length))
		length++;
	wrds = count_word(str);
	if (wrds == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= length; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - c;
				y++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = x;
	}

	matrix[y] = NULL;

	return (matrix);
}
