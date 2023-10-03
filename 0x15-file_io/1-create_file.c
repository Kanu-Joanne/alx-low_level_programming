#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, let = 0;
	int rw;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONGLY | O_TRUNC, 0600);

	if (file == 1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)

	rw = write(file, text_content, let);

	if (rw == -1)
		return (-1);

	close(file);

	return (1);
}
