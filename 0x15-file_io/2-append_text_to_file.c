#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, let, rw;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (let = o, text_content[let];)
			let++;

		rw = write(file, text_content, let);

		if (rw == -1)
			return (-1);
	}

	close(file);

	return (1);
}
