#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * add_numbers - a program that adds positive numbers.
 * @str: array string
 *
 * Return: Always 0 (Success)
 */
int add_numbers(char *str)
{
	/*Declaring variables*/
	unsigned int cnt;

	cnt = 0;
	while (cnt < strlen(str))

	{
		if (!isdigit(str[cnt])) /*check if str there are digit*/
		{
			return (0);
		}

		cnt++;
	}
	return (1);
}

/**
 * main -a function
 * argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
