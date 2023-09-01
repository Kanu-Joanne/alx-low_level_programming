#include <stdio.h>
#include "main.h"

/**
 * _atoi - a program that multiplies two numbers
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int a, b, c, length, d, numb;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	d = 0;
	numb = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			numb = s[a] - '0';
			if (b % 2)
				numb = -numb;
			c = c * 10 + numb;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - a function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
