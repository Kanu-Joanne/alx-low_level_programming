#include <stdio.h>
#include "main.h"

/**
 * _putchar - this function writes the character c to stdout
 * @c:The character to print
 *
 * Return: if successful 1
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
