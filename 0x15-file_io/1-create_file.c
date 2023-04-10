#include "main.h"

/**
 * create_file - This creates a file.
 * @filename: It is a pointer to the name of the file that will be created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If it fails - -1.
 *         Or Else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int filedata, write, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	filedata = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (filedata == -1 || write == -1)
		return (-1);

	close(filedata);

	return (1);
}

