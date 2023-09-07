#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments
 * @ac: int variable
 * @av: char variable
 * Return: nothing
 */
char *argstostr(int ac, char **av)
{
	int p, q, x = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			y++;
	}
	y += ac;

	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
	for q = 0; av[p][q]; q++)
	{
		str[x] = av[p][q];
		x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	}
	return (str);
}
