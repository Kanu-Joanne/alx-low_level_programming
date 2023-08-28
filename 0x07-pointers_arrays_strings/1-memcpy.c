#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where data is copied
 * @src: memory containing data to be copied
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
