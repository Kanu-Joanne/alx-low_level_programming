#include "main.h"
/**
 *_memcpy - a function to mimick memory area
 *@dest: stored value
 *@src: copied value
 *@n: number of bytes
 *
 *Return: n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
