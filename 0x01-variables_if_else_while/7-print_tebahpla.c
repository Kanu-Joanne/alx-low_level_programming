#include <stdio.h>

/**
 * main -prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	alp = 'z';
	
	for (alp = 'z'; alp >= 'a'; alp--)
	{
	    putchar(alp);
	}
	putchar('\n');

	return (0);
}
