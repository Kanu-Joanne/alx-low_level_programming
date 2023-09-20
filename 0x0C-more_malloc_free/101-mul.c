#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: character string to be checked
 *
 * Return: 1 if a non-digit is not found, 0 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - a function that returns the length of a string
 * @s: character string to be checked
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - a function that checks and handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a function that multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, length, x, carry, digit1, digit2, *res, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(str1);
	length2 = _strlen(str2);
	length = length1 + length2 + 1;
	res = malloc(sizeof(int) * length);
	if (!res)
		return (1);
	for (x = 0; x <= length1 + length2; x++)
		res[x] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = str1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(str2) - 1; length2 >= 0; length2--)
		{
			digit2 = str2[length2] - '0';
			carry += res[length1 + length2 + 1] + (digit1 * digit2);
			res[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[length1 + length2 + 1] += carry;
	}
	for (x = 0; x < length - 1; x++)
	{
		if (res[x])
			a = 1;
		if (a)
			_putchar(res[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
