#include "main.h"

/**
 * read_textfile- a function that reads a text file
 * and prints it to the POSIX standard outputt to STDOUT.
 * @filename: serves as a pointer to the string
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bfr;
	ssize_t a;
	ssize_t b;
	int file;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bfr = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	a = read(file, bfr, letters);
	close(file);
	if (a == -1)
	{
		free(bfr);
		return (0);
	}
	b = write(STDOUT_FILENO, bfr, a);
	free(bfr);
	if (a != b)
		return (0);
	return (b);
}
