#include "main.h"
#include <unistd.h>
/**
 * _putchar-outputs c to stdout
 * @c: function input
 * Return: On success
 * error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
