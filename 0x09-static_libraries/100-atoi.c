#include "main.h"

/**
 * _atoi - a function that converts string to integer.
 *
 * @s: string
 *
 * Return: rst
 */

int _atoi(char *s)
{
	int sn = 1, a = 0;
	unsigned int rst = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			sn *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		rst = (rst * 10) + (s[a] - '0');
		a++;
	}
	rst *= sn;
	return (rst);
}
